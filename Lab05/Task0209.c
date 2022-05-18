#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //setlocale(LC_CTYPE, "ukr");
    char str[100];
    printf("Enter text:\n");
    fgets(str, 96, stdin);
    for(int i = 0; str[i] != '\0'; i++)
    {

        if(str[i] == 'Z')
        {
          str[i] = 'A';  
        }
        else if(str[i] == 'z') 
        {
          str[i] = 'a';
        }
        else
        {
          str[i] = str[i] + 1; 
        }
    }
    puts(str);
    return 0;
}
