#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //Lab01 0104
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
    //Lab02 0511
	int n = 0;
	printf("\nLab02. Task 0511.\nEnter a number:\n");
	scanf("%d", &n);
	char* res0511 = lab020511(n);
	puts(res0511);
	//Lab03 0113
    float a1, b1 = 0;
    printf("\nLab03. Task0113.\nEnter a: ");
    scanf("%f", &a1);
    printf("Enter b: ");
    scanf("%f", &b1);
    lab030113(&a1, &b1);
    printf("\na = %f\nb = %f\n", a1, b1);
    return 0;
}
