//28//1 2 3 6 9 18 27 54..
#include<stdio.h>
int main()
{
    int a=1,b=2,i,n;

    printf("enter the number ");
    scanf("%d",&n);
 
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)// 1 2 3<=6 4<=6 5<=6 6<=6
    {
        if(i%2==1)//3%2==1 4%2==0 5%2==1 6%2==0
        {
            a=a*3;//3*1=3 //3*3=9 
            printf("%d ",a);//a=3 a=9
        }
        else
        {
            b=b*3;//2*3==6 b=6 6*3 b=18
            printf("%d ",b);
        }
    }

}
