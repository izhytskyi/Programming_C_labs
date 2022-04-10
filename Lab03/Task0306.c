#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *a, *b, *c = NULL;
    a = malloc(sizeof(float));
    b = malloc(sizeof(float));
    c = malloc(sizeof(float));
    printf("Enter a = ");
    scanf("%f", a);
    printf("Enter b = ");
    scanf("%f", b);
    printf("Enter c = ");
    scanf("%f", c);
    *a = *a / 2;
    printf("\na = %.2f\nb = %.2f\nc = %.2f\n", *a, *b, *c);
    return 0;
}
