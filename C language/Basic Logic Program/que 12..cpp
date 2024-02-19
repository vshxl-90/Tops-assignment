//12. Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?
#include<stdio.h>
int main()
{

    int Students;
    
    printf("Enter the number of students: ");
    scanf("%d",&Students);
    
    int totalApples = numberOfStudents * 5;
    
    printf("Total apples required: %d :", totalApples);

    return 0;
}

