//24.Accept 5 employees name and 
//salary and count average and total salary 
#include <stdio.h>
int main() 
{
    // Declare variables
    char names[5][50];
    float salaries[5];
    float totalSalary = 0.0;
    float averageSalary;

    // Input data
    printf("Enter details for 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        // Calculate total salary
        totalSalary += salaries[i];
    }

    // Calculate average salary
    averageSalary = totalSalary / 5;

    // Display results
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Employee %d: Name: %s, Salary: %f\n", i + 1, names[i], salaries[i]);
    }

    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    return 0;
}

 

