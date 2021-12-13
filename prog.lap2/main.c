#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

int main()
{
    double z1, z2, gr, rad;
    rad = PI/180;
    scanf("%lf", &gr);

    z1 = pow(cos((PI*3)/8 - (gr*rad)/4), 2) - pow(cos((PI*11)/8 + (gr*rad)/4), 2);
    z2 = sqrt(2)/2 * sin((gr*rad)/2);
    printf("%lf %lf", z1, z2);
}
