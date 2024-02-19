////Calculate 5 numbers from user and calculate number of even and odd using of while loop
//
//#include<stdio.h>
//
//int main()
//{
//    int count = 0, num, evenCount = 0, oddCount = 0;
//
//    printf("Enter 5 numbers:\n");
//	scanf("%d", &num);
//
//    while (count < 5) 
//	{
//        if (num % 2 == 0)
//		{
//            evenCount++;    
//        } 
//		else
//		{
//            oddCount++;
//        }
//
//        count++;
//    }
//
//    printf("Number of even numbers: %d\n", evenCount);
//    printf("Number of odd numbers: %d\n", oddCount);
//
//    return 0;
//}
#include <stdio.h>

int main()

{

    char fname[20], mname[20], lname[20]; /* person’s name */

      /* accept full name */


     printf(“Enter full name (first middle last): “);

     scanf(“%s %s %s”, fname, mname, lname);

      /* print abbreviated name */

     printf(“Abbreviated name: “);

     printf(“%c. %c. %s\n”, fname[0], mname[0], lname);

     return 0;

}
