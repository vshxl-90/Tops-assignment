//17//Write a C program to check whether a triangle can be formed
//with the givenvalues for the angles.
#include<stdio.h>
int main()
{
	int s1,s2,s3,sum;
	printf("enter the size of side 1 :");
	scanf("%d",&s1);
	
    printf("enter the size of side 2 :");
    scanf("%d",&s2);
    
    printf("enter the size of side 3 :");
    scanf("%d",&s3);
    
    sum=s1+s2+s3;
    if(sum==180)
    {
    	printf("the triangle can be formeted with given values  ");
	}
	else
	{
		printf("the triangle can not be  formeted with given values  ");
	}
	return 0;
	
}

