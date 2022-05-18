#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //setlocale(LC_CTYPE, "ukr");
    int a_counter, o_counter = 0;
    char str[100];
    printf("Enter text:\n");
    fgets(str, 96, stdin);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] == 'A')||(str[i] == 'a')) a_counter++;
        else if((str[i] == 'O')||(str[i] == 'o')) o_counter++;
    }
    if(a_counter > o_counter) printf("A is more\n");
    else if(o_counter > a_counter) printf("O is more\n");
    if(o_counter == 0) printf("O symbol not found\n");
    if(a_counter == 0) printf("A symbol not found\n");
    printf("\nA-%d O-%d\n", a_counter, o_counter);
    return 0;
}
