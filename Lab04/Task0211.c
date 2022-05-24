#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ukr");
    int tmp1, tmp2, tmp, result, n1, n2 = 0;
    int n = 20;
    int x[20];
    int y[20];
    
    for (int j = 0; j < n - 1; j++)
        for (int i = j + 1; i < n; i++)
        {
            double tmp1 = pow((x[i]) - (x[j]), 2);
            double tmp2 = pow((y[i]) - (y[j]), 2);
            double tmp = sqrt(tmp1 + tmp2);
            if (tmp > result)
            {
                result = tmp;
                n1 = i;
                n2 = j;
            }
        }
 
    printf("\nНомер точки 1 = %d\n", n1);
    printf("Номер точки 2 = %d\n", n2);
    printf("Результат = %d\n", result);

    return 0;
}
