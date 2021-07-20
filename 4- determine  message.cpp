#include<stdio.h>
int main()
{
	int poll, read; 
	float grams;
	printf("(1)Carbon monoxide\n(2)Hydrocarbons\n(3)Nitrogen oxides\n(4)Nonmethane Hydrocarbons\n");
	printf("\nEntre pollutent number>>  ");
	scanf("%d",&poll);
	printf("Entre number of grams emitted per mile>>  ");
	scanf("%f",&grams);
	printf("Entre odometer reading>>  ");
	scanf("%d",&read);
	
	if(poll==1 && read <=50000)
	{
		if(grams < 3.5)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 3.4 grams/mile");
	}
	else if(poll==2 && read<=50000)
	{
		if(grams < 0.32)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.31 grams/mile");		
	}	
	else if(poll==3 && read<=50000)
	{
		if(grams < 0.5)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.4 grams/mile");
	}
	else if(poll==4 && read<=50000)
	{
		if(grams <= 0.25)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.25 grams/mile");
	}	
	else if(poll==1 && read>50000)
	{
		if(grams <= 4.2)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 4.2 grams/mile");
	}
	else if(poll==2 && read>50000)
	{
		if(grams <= 0.39)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.39 grams/mile");	
	}	
	else if(poll==3 && read>50000)
	{
		if(grams <= 0.5)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.5 grams/mile");
	}
		
	else if(poll==4 && read>50000)
	{
		if(grams < 0.32)
		printf("You are in good condition");
		else
		printf("Emissions exceed premitted level of 0.31 grams/mile");
	}
	else
	printf("You Entery is not valid !!");	
	return 0;
}
