#include <stdio.h>
#include <locale.h>
#include <malloc.h>
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int mlt = 1;
    char *str;
    str = (char *)malloc(100);
 
    printf("Введіть строку:\n");
    fgets(str, 96, stdin);
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            mlt *= str[i] - '0';
        }
    }
    printf("Добуток=%d\n", mlt);
    free(str);
    return 0;
}
