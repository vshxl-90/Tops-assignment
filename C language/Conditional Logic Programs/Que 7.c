//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your marks :");
	scanf("%d",&mark);
	
	if(mark>=33)
	{
		 
        printf("Congratulations! You have passed.");
    }
	 else 
	{
        printf("Sorry, you have failed.");
	}
	return 0;
}
