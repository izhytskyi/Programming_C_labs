#include <stdio.h>

int main()
{
    float galone = 16;
    float busel = 1.2;
    float lit = 3;
    float res = (busel*62.0121) + ((galone/0.2642) + (lit/5.6826));
    printf("Result: %f pintes", res);
    return 0;
}

/*Для вечірки було приготовлено 16 галонів фруктового напою. Скільки залишилося
імперських пінт напою залишилося, якщо гості на вечірці випили 1,2 американських бушеля
напою, а 3 літри пролили на землю (1 американський бушель = 62,0121 імперських пінти, 1 л
= 0,2642 галона, 1 імперська пінта = 5,6826 л).*/
