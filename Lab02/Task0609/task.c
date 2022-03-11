#include <stdio.h>
#include <math.h>

int main()
{
    double z = 0;
    double supp = 1;
    int n = 0;
    int i = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        z = z + (1 + 1/(pow(n,2)));
        supp = supp * z;
    }
    printf("Supplement = %.2f", supp);
    return 0;
}