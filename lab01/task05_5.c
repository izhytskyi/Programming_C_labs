#include <stdio.h>
#include <math.h>
float PI = 3.14;

int main()
{
	float alp = 0;
	float z1,z2 = 0;
	printf("Enter alpha:\n");
	scanf("%d", &alp);
	z1 = pow(cos((3*PI/8)-(alp/4)),2) - pow(cos((11*PI/8)+(alp/4)),2);
	z2 = (sqrt(2)/2)*sin(alp/2);
	printf("%.2f\n%.2f", z1,z2);
	return 0;
}