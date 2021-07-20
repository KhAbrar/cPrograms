#include<stdio.h>
int main (void)
{
	int n, rdg;
	float grm;
	printf("(1) Carbon monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) Nonmethane hydrocarbons\n");
	printf("\nEnter pollutant number>> ");
	scanf("%d",&n);
	printf("Enter number of grams emitted per mile>> ");
	scanf("%d",&grm);
	printf("Enter odometer reading>> ");
	scanf("%d",&rdg);

	if(n==1 && rdg<=50000)
{
	printf("\nEmissions exceed permitted level of 3.4 grams/mile.");
}	
	else if(n==1 && rdg>50000)
{
	printf("\nEmissions exceed permitted level of 4.2 grams/mile.");
}
	else if(n==2 && rdg<=50000)
{
	printf("\nEmissions exceed permitted level of 0.31 grams/mile.");
}
	else if(n==2 && rdg>50000)
{
	printf("\nEmissions exceed permitted level of 0.39 grams/mile.");
}
	else if(n==3 && rdg<=50000)
{
	printf("\nEmissions exceed permitted level of 0.4 grams/mile.");
}
	else if(n==3 && rdg>50000)
{
	printf("\nEmissions exceed permitted level of 0.5 grams/mile.");
}
	else if(n==4 && rdg<=50000)
{
	printf("\nEmissions exceed permitted level of 0.25 grams/mile.");
}
	else if(n==4 && rdg>50000)
{
	printf("\nEmissions exceed permitted level of 0.31 grams/mile.");
}
	else
	printf("\nYon Enter Wrong pollutant number!!");
	return 0;
}
