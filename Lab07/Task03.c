#include <stdio.h>
#include <math.h>

int lab010104(int a, int b);
float lab010312(float AB, float BC, float AC);
float lab020211(float x);


int main()
{
    //lab01 0104
    int a = 0;
    int b = 0;
    int pows, abss, res = 0;
    printf("\nLab01. Task0104.\nEnter two int numbers:\n");
    scanf("%d %d", &a, &b);
    res = lab010104(a, b);
    printf("%d\n", res);
    //lab01 0312
    float AB, BC, AC = 0;
    printf("\nLab01. Task0312.\nEnter AB: ");
    scanf("%f", &AB);
    printf("Enter BC: ");
    scanf("%f", &BC);
    printf("Enter AC: ");
    scanf("%f", &AC);
    float h = lab010312(AB, BC, AC);
    printf("AK = %f", h);
    //Lab02 0211
    float x = 0;
    printf("\nLab02. Task0211.\nEnter x:\n");
    scanf("%f", &x);
    float result = lab020211(x);
    printf("Result = %.2f", result);
    return 0;
}

int lab010104(int a, int b)
{
    int pows = (pow(a, 2) + pow(b, 2));
    int abss = (abs(a) + abs(b));
    int res = pows + abss;
    return res;
}

float lab010312(float AB, float BC, float AC)
{
    float per = (AB+BC+AC)/2;
    float S = 0;
    S = sqrt(per*(per-AB)*(per-BC)*(per-AC));
    float h = (2*S)/BC;
    return h;
}

float lab020211(float x)
{
    float result = 0;
    float znamenyk = (pow(x,2) - 2*x - 10);
    if(znamenyk==0){
        printf("Division by zero!");
    }
    else{
    result = 1/(pow(x,2) - 2*x - 10);
    }
    return result;
}
