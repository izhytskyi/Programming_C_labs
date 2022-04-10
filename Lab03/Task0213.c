#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c = 0;
    printf("Enter a(katet 1): ");
    scanf("%f", &a);
    printf("Enter b(katet 2): ");
    scanf("%f", &b);
    float *pa = &a;
    float *pb = &b;
    float *pc = &c;
    *pc = sqrt(pow(*pa,2) + pow(*pb,2));
    printf("\na = %f\nb = %f\nC = %f", a, b, c);
    return 0;
}
