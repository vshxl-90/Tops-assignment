//20.Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary
#include <stdio.h>
int main() 
{
   
    float salary, insurancePremium, loanInstallment, remainingSalary;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

  
    insurancePremium = 0.1 * salary;
    loanInstallment = 0.1 * salary;
    remainingSalary = salary - insurancePremium - loanInstallment;

  
    printf("\nSalary: $%.2f\n", salary);
    printf("Insurance Premium (10%%): -$%.2f\n", insurancePremium);
    printf("Loan Installment (10%%): -$%.2f\n", loanInstallment);
    printf("Remaining Salary: $%.2f\n", remainingSalary);

    return 0;
}
