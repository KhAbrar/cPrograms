#include<stdio.h> 
int main (void)
{
	float a, b, c, xx1, xx2, yy1,yy2;
	printf("Enter Total purchases >  $");
	scanf("%f",&a);
                      
	if(a>=100)
	{
	b = (a/100)*12;
	printf("Teacher's discount (12%%)  $%.2f",b);
	c = a-b;
	printf("\n Discounted total   $%.2f",c);
	xx1 = (c/100)*5;
	printf("\n Sales tax (5%%)   $%.2f",xx1);
	yy1 = c + xx1;
	printf("\n Your Total is \t  $%.2f",yy1);
}
	else
{
	xx2 = (a/100)*5;
	printf("\n Sales tax (5%%)  $%.2f",xx2);
	yy2 = xx2 + a;
	printf("\n\n Your Total is $%.2f",yy2);
}
	return 0;
	
}
