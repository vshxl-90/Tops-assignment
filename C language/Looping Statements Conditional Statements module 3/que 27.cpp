//1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include <stdio.h>
int main() 
{
    float n,sum;
    printf("enter number :");
    scanf("%f",&n);
    

    for (int i=1;i<=n;i++) 
	{
        if(i%2==0) 
		{
        
            sum= (float)i / (i + 1);
            printf("-%d/%d ", i, i + 1);
        } else {
            // If i is odd, add i/(i+1)
            sum += (float)i / (i + 1);
            printf("%d/%d ", i, i + 1);
        }
    }

    printf("\nSum: %f\n", sum);

    return 0;
}

