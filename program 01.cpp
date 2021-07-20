#include<stdio.h>
#include<math.h>
int main(void)
{

	float  a, sinx, cosx;

    int b, init_degree=0, final_degree=90, step_degree=10;

    printf("Angle(x)   sin(x)   cos(x)\n");

    for(b=init_degree; b<=final_degree; b=b+step_degree)

    {

    a = (b*3.14159)/180;

    printf("%d    \t   %.4f   %.4f\n",b,sin(a),cos(a));

    }

    return 0;
}

