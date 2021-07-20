#include<stdio.h>
int main(void)
{
	double t, t1, t2, t3;
	printf("enter time>");
	scanf("%lf",&t1);
	scanf("%lf",&t2);
	t=t1+(t2/60);
	t3=((4*t*t)/(t+2))-20;
	printf("%.2lf",t3);
	return 0;
	
} 
