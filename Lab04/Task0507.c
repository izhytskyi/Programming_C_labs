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
    int p = 0;
    int t = 0;
    printf("Enter P = ");
    scanf("%d", &p);
    printf("Enter T = ");
    scanf("%d", &t);
    float a_average = 0;
    int sum = 0;
    int elements = p*t;
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < t; j++)
        {
            printf("Enter M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < t; j++)
        {
            sum = sum + M[i][j];
        }
    }
    a_average = (float)sum/(float)elements;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(M[i][j] > a_average)
            {
                M[i][j] = 1;
            }
            else if(M[i][j] < a_average)
            {
                M[i][j] = -1;
            }
        }
    }
    printf("Average : %d/%d = %f\n", sum, elements, a_average);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < t; j++)
        {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
