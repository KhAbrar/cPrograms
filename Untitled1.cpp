#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
 {
    double  a,sinx , cosx;
    int init_degree=0,final_degree=90,step_degree=10,i;
    printf("x        sin(x)    cos(x)\n");

    for(i=init_degree;i<=final_degree;i=i+step_degree)
    {
        a = i*3.14159;
        a=a/180;
        printf("%d     %lf     %lf\n",i,sin(a),cos(a));
    }
    return 0;
}
