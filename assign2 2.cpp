#include<stdio.h>
int main()

{

    int maxc, minc, step =10, Centimeters, Inches;

    printf("Please enter the maximum value in centimeters\n");

   scanf("%d", &maxc);

   printf("Please enter the minimum value in centimeters\n");

   scanf("%d", &minc);
   printf("   CM       Inc.\n ");
    for (Centimeters = maxc; Centimeters >= minc; Centimeters-= step)

    {
        Inches = Centimeters * 0.3937;

            }

 return 0;

}

