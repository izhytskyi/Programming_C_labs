#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char s[256],*words[128];
    char *d=" ,.";
    int count=0;
    printf("Enter your string:\n");
    fgets(s, 255, stdin);
    char *p;
    p = strtok(s, d);
    while(p) 
    {
        words[count] = (char*)malloc(strlen(p)+1);
        strcpy(words[count],p);
        count++;
        p = strtok(NULL, d);
    }
    for (int k=0; k<count/2*2; k+=2) 
    {
        char *temp = words[k];
        words[k] = words[k+1];
        words[k+1] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%s ", words[i]);
    }
    return 0;
}
