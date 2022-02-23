#include <stdio.h>
#include <math.h>

int main()
{
    float x, y = 0;
    printf("Enter x:\n");
    scanf("%f", &x);
    printf("Enter y:\n");
    scanf("%f", &y);
    if(((x>=-1)&&(x<=1))&&((y>=0)&&(y<=1))){
        printf("Dot (%.2f,%.2f) in zone", x, y);
    }
    else{
        printf("Dot not in zone");
    }
    return 0;
}

//x[-1, 1] y[0,1]