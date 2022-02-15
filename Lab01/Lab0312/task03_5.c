#include <stdio.h>
#include <math.h>
float PI = 3.14;

int main()
{
    float P, H, R, l, Sb, S, V = 0;
    printf("Enter P and H:\n");
    scanf("%f %f", &P, &H);
    R = P/2*PI;
    l = sqrt((pow(R,2)+pow(H,2)));
    Sb = PI*R*l;
    float Sk = PI*pow(R,2);
    S = Sb + Sk;
    V = (Sk*H)/3;
    printf("%.2f %.2f\n", S, V);
    return 0;
};