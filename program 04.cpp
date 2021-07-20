#include <stdio.h>
int  main(void)
{
int a, b;

for(a = 0; a <= 5; a++) 

  { for(b= 0; b<= a; b++)
    printf("%d", b);
    printf("\n");  }
 
 
for(a = 4; a >= 0; a--) 

  { for(b= 0; b<=a; b++)
    printf("%d", b);
    printf("\n");  }
 
return 0;
}

