#include<stdio.h>
int main(void)
{
	float q,k,a,t1,t2,l;
	printf("Enter the valu of K=");
	scanf("%f",&k);
	printf("Enter the valu of A=");
	scanf("%f",&a);
	printf("Enter the valu of T1=");
	scanf("%f",&t1);
	printf("Enter the valu of T2=");
	scanf("%f",&t2);
	printf("Enter the valu of L=");
	scanf("%f",&l);
	q=(k*a*(t1-t2))/l;
	printf("The value of q is %5.2f",q);
	return 0;

}
