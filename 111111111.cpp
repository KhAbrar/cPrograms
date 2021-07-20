#include<stdio.h>
int main (void)
{
	int dd1, dd, mm, yy;
	printf("Enter Date (DD MM YYYY) >> ");
	scanf("%d",&dd1);
	scanf("%d",&mm);
	scanf("%d",&yy);
if(yy%4!=0)
{
	if (mm==1 && dd1<=31)
	{printf("\nDay %d of %d",dd1,yy);}
    else if (mm==2 && dd1<=28)
	{ dd = dd1+31;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==3 && dd1<=31)
	{dd = dd1+59;
	printf("\nDay %d of %d",dd,yy);}   
	else if (mm==4 && dd1<=30)
	{dd = dd1+90;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==5 && dd1<=31)
	{dd=dd1+120;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==6 && dd1<=30)
	{dd=dd1+151;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==7 && dd1<=31)
	{dd=dd1+181;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==8 && dd1<=31)
	{dd=dd1+212;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==9  && dd1<=30)
	{dd=dd1+242;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==10 && dd1<=31)
	{dd=dd1+273;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==11 && dd1<=30)
	{dd=dd1+303;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==12 && dd1<=31)
	{dd=dd1+334;
	printf("\nDay %d of %d",dd,yy);}
	else
	{printf("\nYou Enter Wrong Day or Month!!");}	
}
else
{
    if(mm==1 && dd1<=31)
	{printf("\nDay %d of %d",dd1,yy);}
    else if (mm==2 && dd1<=29)
	{ dd = dd1+31;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==3 && dd1<=31)
	{dd = dd1+60;
	printf("\nDay %d of %d",dd,yy);}   
	else if (mm==4 && dd1<=30)
	{dd = dd1+91;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==5 && dd1<=31)
	{dd=dd1+121;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==6 && dd1<=30)
	{dd=dd1+152;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==7 && dd1<=31)
	{dd=dd1+182;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==8 && dd1<=31)
	{dd=dd1+213;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==9  && dd1<=30)
	{dd=dd1+243;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==10 && dd1<=31)
	{dd=dd1+274;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==11 && dd1<=30)
	{dd=dd1+304;
	printf("\nDay %d of %d",dd,yy);}
	else if (mm==12 && dd1<=31)
	{dd=dd1+335;
	printf("\nDay %d of %d",dd,yy);}
	else
	{printf("\nYou Enter Wrong Day or Month!!");}
}
	return 0;	
}
