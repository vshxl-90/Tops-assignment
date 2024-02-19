//19.Calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	double principle,rate,time,ci;
	
	printf("Enter the principle amount :");
	scanf("%f",&principle);
	
	printf("Enter the rate of interest :");
	scanf("%f",&rate);
	
	printf("Enter the time :");
	scanf("%f",&time);

	ci= principle*pow(1 +rate/100)*time;
	printf("compound interest =%lf",ci);
	return 0;
}
