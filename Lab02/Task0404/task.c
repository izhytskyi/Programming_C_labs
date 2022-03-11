#include <stdio.h>

int main()
{
	float F, a, b, c, x = 0;
	printf("Enter a:\n");
	scanf("%f", &a);
	printf("Enter b:\n");
	scanf("%f", &b);
	printf("Enter c:\n");
	scanf("%f", &c);
	printf("Enter x:\n");
	scanf("%f", &x);
	if((x<0)&&(b!=0)){
		F = (-a)*x - c;
	}
	else if((x>0)&&(b==0)){
		F = (x-a)/c;
	}
	else{
		F = (b*x)/(c-a);
	}
	printf("%.2f", F);
	return 0;
}