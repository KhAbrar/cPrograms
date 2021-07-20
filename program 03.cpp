#include<stdio.h>
int main (void)
{
int whole=0, frac=0; 
double num; 
printf("Enter a list of numbers terminated by zero\n");
 scanf("%lf", &num);
  while (num != 0) 
{
 if (int(num) == num) 
 whole++; 
 else
 frac++; 
  scanf("%lf", &num);
  } 

printf("There were %d whole numbers and %d numbers with fractional parts.\n", whole, frac);

return 0;
}
