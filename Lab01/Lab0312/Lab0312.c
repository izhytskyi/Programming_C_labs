#include <stdio.h>
#include <math.h>

int main()
{
    float AB, BC, AC = 0;
    printf("Enter AB: ");
    scanf("%f", &AB);
    printf("Enter BC: ");
    scanf("%f", &BC);
    printf("Enter AC: ");
    scanf("%f", &AC);
    float per = (AB+BC+AC)/2;
    float S = 0;
    S = sqrt(per*(per-AB)*(per-BC)*(per-AC));
    float h = (2*S)/BC;
    printf("AK = %f", h);
    return 0;
};

// Трикутник ABC задано довжинами своїх сторін. Знайти довжину висоти, опущеної з вершини A.