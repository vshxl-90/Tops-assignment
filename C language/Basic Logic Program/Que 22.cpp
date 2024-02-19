//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include<stdio.h>
int main()
{
	float Amount,P,R,t,CI;
	
	printf("Enter the principal :");
	scanf("%f",&P);
	
	printf("\nEnter the rate :");
	scanf("%f",&R);
	
	printf("\nEnter the time :");
	scanf("%f",&t);
	
    Amount=P*(1+R/100)*t;
    printf("Amount is %f",Amount);
    
    CI=Amount-P;
    printf("\nCompound Interest is %f",CI);
    
	return 0;
}
