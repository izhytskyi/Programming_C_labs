#include <stdio.h>
#include <math.h>

int main()
{
    float x, result = 0;
    printf("Enter x:\n");
    scanf("%f", &x);
    float znamenyk = (pow(x,2) - 2*x - 10);
    if(znamenyk==0){
        printf("Division by zero!");
    }
    else{
    result = 1/(pow(x,2) - 2*x - 10);
    }
    printf("Result = %.2f", result);
    return 0;
}

// res = 1/(x^2 - 2*x - 10)