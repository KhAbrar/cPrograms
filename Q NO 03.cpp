#include<stdio.h>
#define PI 3.14159
int main(void)
{
	float radius,area;
	printf("Enter the value of radius:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("The area of the circle is %5.2f",area);
	return 0;
}
