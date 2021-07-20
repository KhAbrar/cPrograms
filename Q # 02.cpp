#include<stdio.h>
int main(void)
{
	float n;
	printf("Enter Richter Scale Number > ");
	scanf("%f",&n);
	if(n < 5.0)
	printf("\nLittle or no damage");
	else if(5.0 <= n && n < 5.5)
	printf("\nSome damage");
	else if(5.5 <= n && n< 6.5)
	printf("\nSerious damage: walls may crack or fall");
	else if(6.5 <= n && n < 7.5 )
	printf("\nDisaster: houses and buildings may collapse");
	else
	printf("\nCatastrophe: most buildings destroye");
	return 0;
}
