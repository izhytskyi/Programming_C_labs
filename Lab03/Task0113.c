#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int *pa = &a;
    int *pb = &b;
    *pa = *pa * 2;
    *pb = *pb / 2;
    printf("\na = %d\nb = %d\n", a, b);
    return 0;
}
