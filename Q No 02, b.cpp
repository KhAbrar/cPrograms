#include<stdio.h>
int main(void)
{
	double a,area;
	printf("Enter the length:");
	scanf("%lf",&a);
	area=a*a;
	printf("The area of a square whose side length is %5.2f cm is %5.2f square cm.",a,area);
	return 0;
}
