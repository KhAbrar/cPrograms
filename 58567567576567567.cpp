#include<stdio.h>
int main (void)
{
	int dd1, dd, mm, yy;
	printf("Enter Date (DD MM YYYY) >> ");
	scanf("%d",&dd1);
	scanf("%d",&mm);
	scanf("%d",&yy);
	if (mm==1 && dd1<=31)
	{printf("Day %d of %d",dd1,yy);}
    else if (mm==2 && dd1<=29)
	{ dd = dd1+31;
	printf("Day %d of %d",dd,yy);}
	
	
	{
		
	}
	
	
	
	else if (mm==3 && dd1<=31 && yy%4!=0)
	{dd = dd1+59;
	printf("Day %d of %d",dd,yy);}   
	else if (mm==3 && dd1<=31 && yy%4==0)
	{dd = dd1+60;
	printf("Day %d of %d",dd,yy);}
	else if (mm==4 && dd1<=30)
	{dd = dd1+90;
	printf("Day %d of %d",dd,yy);}
	else if (mm==5 && dd1<=31)
	{dd=dd1+120;
	printf("Day %d of %d",dd,yy);}
	else if (mm==6 && dd1<=30)
	{dd=dd1+151;
	printf("Day %d of %d",dd,yy);}
	else if (mm==7 && dd1<=31)
	{dd=dd1+181;
	printf("Day %d of %d",dd,yy);}
	else if (mm==8 && dd1<=31)
	{dd=dd1+212;
	printf("Day %d of %d",dd,yy);}
	else if (mm==9  && dd1<=30)
	{dd=dd1+242;
	printf("Day %d of %d",dd,yy);}
	else if (mm==10 && dd1<=31)
	{dd=dd1+273;
	printf("Day %d of %d",dd,yy);}
	else if (mm==11 && dd1<=30)
	{dd=dd1+303;
	printf("Day %d of %d",dd,yy);}
	else if (mm==12 && dd1<=31 && yy%4!=0)
	{dd=dd1+334;
	printf("Day %d of %d",dd,yy);}
	else if (mm==12 && dd1<=31 && yy%4==0)
	{dd=dd1+335;
	printf("Day %d of %d",dd,yy);}
	else
	{printf("You Enter Wrong Day or Month!!");}	
	return 0;	
}
