#include <stdio.h>

int main()
{
    int M[100][100];
    for(int i = 0; i<100; i++)
    {
        for(int j = 0; j<100; j++)
        {
            M[i][j] = 0;
        }
    }
    int n = 0;
    printf("Enter N = \n");
    scanf("%d", &n);
    int max = 0;
    int min = 100000;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(M[i][j] > max) max = M[i][j];
            if(M[i][j] < min) min = M[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }
    int res = max - min;
    if(min < 0)
    {
        printf("%d - (%d) = %d", max, min, res);
    }
    else
    {
        printf("%d - %d = %d", max, min, res);
    }
    return 0;
}
