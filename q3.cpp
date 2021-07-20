#include <stdio.h>

int main()
{
    int d,m,y;
    int days=0;
    int k=1;                     
  printf("Entre the Date in format(DD/MM/YYYY)\n");
    scanf("%d/%d/%d",&d,&m,&y);
    m--;
    switch(m)
     {
        case 11:days=30;
        case 10:days+=31;
        case 9:days+=30;
        case 8:days+=31;
        case 7:days+=31;
        case 6:days+=30;
        case 5:days+=31;
        case 4:days+=30;
        case 3:days+=31;
        case 2:if((!(y%4))&&(y%100))
                   days+=29;
               else if(!(y%400))
                   days+=29;
               else
                   days+=28;
        case 1:days+=31;
        case 0:break;
     }
    k=y;
    printf("Days:%d\nLeap year:%d\n\n",days+d,k);
}
 
int leap(int year)
{
    if((!(year%4))&&(year%100))
        return 1;
    else if(!(year%400))
        return 1;
    else
        return 0;
}
