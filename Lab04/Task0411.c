#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    int **a;
    int i, j, m, n = 0;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    a = (int**)malloc(m * sizeof(int*));
        for (i = 0; i < m; i++)
        {
            a[i] = (int*)malloc(n * sizeof(int));
            for (j = 0; j < n; j++)
            {
                printf("a[%d][%d] = ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        int max_m, max_n = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] > a[max_m][max_n])
            {
                max_m = i; max_n = j; 
            }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMax element = %d", a[max_m][max_n]);
    printf("\nPosition of max element = string #%d", max_m+1);
    for (i = 0; i < m; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
