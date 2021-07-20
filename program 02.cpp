#include <stdio.h>
int main(void)
{

  float cm, inch, large, small;

  printf("Enter the smallest number of cm  >> ");
  scanf("%f", &small);

  printf("Enter the largest number of cm >> ");
  scanf("%f", &large);

  printf("Centimeters \t inches\n ");

  for (cm=small; cm<=large; cm=cm + 10)

  {
  inch = cm * 0.3937;
  printf(" %.2f   \t  %.3f\n", cm, inch);
  }

  return 0;
}

