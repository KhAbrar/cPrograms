#include<stdio.h>
int main()
{
	int p;  
	int r;    
	double t;   
	double gpm;   
	printf("(1)Carbon monoxide\n(2)Hydrocarbons\n(3)Nitrogen oxides\n(4)Nonmethane Hydrocarbons");
	printf("\nEntre pollutent number>>");
	scanf("%d",&p);
	printf("\nEntre number of grams emitted per mile>>");
	scanf("%lf",&gpm);
	printf("\nEntre odometer reading>>");
	scanf("%d",&r);
	if(p==1 && r<=50000)
		{
		t=3.4;
		if(gpm>t)
		printf("Emissions exceed premitted level of %lf grams/mile",t);
		else
		printf("You are in good condition");
		}
		
	else
	if(p==2 && r<=50000)
		{
		t=3.1;
		if(gpm>t)
		printf("Emissions exceed premitted level of %lf grams/mile");
		else
		printf("You are in good condition");	
		}	
		
	else
	if(p==3&&r<=50000)
		{
		t=0.4;
		if(gpm>t)
		printf("Emissions exceed premitted level of %lf grams/mile");
		else
		printf("You are in good condition");
		}
		
	else
	if(p==4&&r<=50000)
		{
		t=0.25;
		if(gpm<t)
		printf("Emissions exceed premitted level of %lf grams/mile");
		else
		printf("You are in good condition");
		}	
	else
	
	if(p==1&&r>=50000)
		{
		t=4.2;
		if(gpm>t)
		printf("Emissions exceed premitted level of %lf grams/mile",t);
		else
		printf("You are in good condition");
		}
		
	else
		
	if(p==2&&r>=50000)
		{
		t=0.39;
		if(gpm>t)
		printf("Emissions exceed premitted level of %lf grams/mile");
		else
		printf("You are in good condition");	
		}	
		
	else
		
	if(p==3&&r>=50000)
		{
		t=0.5;
		if(gpm>t)
		printf("Emissions exceed premitted level of %.3f grams/mile");
		else
		printf("You are in good condition");
		}
		
	else
		
	if(p==4&&r>=50000)
		{
		t=0.31;
		if(gpm<t)
		printf("Emissions exceed premitted level of %lf grams/mile");
		else
		printf("You are in good condition");
		}	
		
	
		return (0);
}
