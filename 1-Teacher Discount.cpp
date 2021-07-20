#include<stdio.h> 
int main ()
{
	char Tcondition;
	float  a, b, c, xx1, xx2, yy1,yy2;

	printf("Are You Teacher?  (y/n) > ");
	scanf("%c",&Tcondition);
	if (Tcondition == 'y' || Tcondition == 'Y' )
{
	printf("Enter Total purchases >  $");
	scanf("%f",&a);
	if (a>=100)
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
	b = (a/100)*10;
	printf("Teacher's discount (10%%)  $%.2f",b);
	c = a-b;
	printf("\n Discounted total   $%.2f",c);
	xx1 = (c/100)*5;
	printf("\n Sales tax (5%%)   $%.2f",xx1);
	yy1 = c + xx1;
	printf("\n Your Total is \t  $%.2f",yy1);
	}
}
else if (Tcondition == 'n' || Tcondition == 'N')
{
	printf("Enter Total purchases >  $");
	scanf("%f",&a);
	xx2 = (a/100)*5;
	printf("\n Sales tax (5%%)  $%.2f",xx2);
	yy2 = xx2 + a;
	printf("\n\n Your Total is $%.2f",yy2);
}
else 
{  printf("Plese Enter YES (y) or NO (n). ");  }
return 0;
}
	
