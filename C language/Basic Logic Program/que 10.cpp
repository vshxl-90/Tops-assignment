//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	int l,w,h,area;
	printf("Enter length :");
	scanf("%d",&l);
	printf("Enter width :");
	scanf("%d",&w);
	printf("Enter height :");
	scanf("%d",&h);
	area=  2 * ((l * h) + (w * h) + (l * w));
	printf("area of a rectangular prism %d:",area);
}
