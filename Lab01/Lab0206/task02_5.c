#include <stdio.h>

int main()
{
    int temperature_k = 0;
    int temperature_c = 0;
    printf("Enter temperature in Kelvin:\n");
    scanf("%d", &temperature_k);
    temperature_c = temperature_k + 273;
    printf("Temperature in Celsius:%d\n(1 degree in Kelvin = %d in Celsius)", temperature_c, 1+273);
    return 0;
}