#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int pows, abss, res = 0;
    printf("Enter two int numbers:\n");
    scanf("%d %d", &a, &b);
    pows = (pow(a, 2) + pow(b, 2));
    abss = (abs(a) + abs(b));
    res = pows + abss;
    printf("%d\n", res);
    return 0;
}

//done