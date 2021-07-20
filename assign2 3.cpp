#include<stdio.h>
main()
{
int wholenumber, fractionalpart;
double number;
wholenumber = 0;
fractionalpart = 0; 
printf("Enter a list of numbers with terminating value");
scanf("%lf",&number);
while (number != 0)
{ 
if (int(number) == number) 
wholenumber++;
 else 
fractionalpart++;

}
 printf("There were %d whole number and %d number with fractional parts.\n", wholenumber, fractionalpart); 
return 0;
}
