
#include <stdio.h>

#include <stdlib.h>

int main()

{

    int maxc, minc, step =10, Centimeters, Inches;

    printf("Please enter the max value in centimeters\n");

   scanf("%d", &maxc);

   printf("Please enter the min value in centimeters\n");

   scanf("%d", &minc);printf("   Centimeters       Inches\n ");

 

 

    for (Centimeters = maxc; Centimeters >= minc; Centimeters-= step)

    {

        /*do Math*/

        Inches = Centimeters * 0.3937;

            }

 return 0;

}


