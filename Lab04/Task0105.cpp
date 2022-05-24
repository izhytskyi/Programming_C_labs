#include <iostream>
#include <math.h>

int main()
{
    float x[100];
    float min, elem = 0;
    float intPart, fractPart = 0;
    int num = 0;
    min = 0.3;
    x[0] = 0.3;
    x[1] = -0.3;
    for(int i = 3; i < 100; i++)
    {
        x[i-1] = i + sin(x[i-2]);
        fractPart = modf(x[i-1], &intPart);
        if(fractPart < min)
        {
            elem = x[i-1];
            min = fractPart;
            num = i;
        }
        if((1-fractPart) < min)
        {
        elem = x[i-1];
        min = fractPart;
        num = i;
        }
    }
    for(int i = 0; i < 100; i++)
    {
        printf("%f\n", x[i]);
    }
    printf("The closest element to the whole: x[%d] = %f", num, elem);
    
    return 0;
}
