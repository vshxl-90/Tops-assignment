//15.Write a C program to determine eligibility for admission to a professional course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 
//--------Input the marks obtained in 
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include<stdio.h>
int main()
{
	int maths,phy,chem,total_in_3sub,total_2sub;
	
	printf("enter maths marks ");
	scanf("%d",&maths);
	
	printf("enter physics marks ");
	scanf("%d",&phy);
	
	printf("enter chemistry marks ");
	scanf("%d",&chem);
	
	total_in_3sub=maths+phy+chem;
	printf("\ntotal marks of 3 subject is %d",total_in_3sub);
	
	total_2sub=maths+phy;
	printf("\ntotal marks of 2 subject is %d",total_2sub);
	
	if(maths>=65 && phy>=55 && chem>=50 && total_in_3sub>=190 && total_2sub>=140)
	{
		printf("\ncandidate is eligible");
	}
	else
	{
		printf("\ncandidate is not eligible");
	}
	return 0;
}
