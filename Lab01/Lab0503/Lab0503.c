#include <stdio.h>
#include <math.h>

int main()
{
	double alp = 0;
	double z1,z2 = 0;
	printf("Enter alpha:\n");
	scanf("%f", &alp);
	z1 = 1 - (1/4)*pow(sin(2*alp),2) + (cos(2*alp));
	z2 = pow(cos(alp),2) + pow(cos(alp),4);
	printf("%.2f\n%.2f", z1,z2);
	return 0;
}