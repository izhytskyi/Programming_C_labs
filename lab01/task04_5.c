#include <stdio.h>
#include <math.h>

int main()
{
	float v1, v2, s0, S, T = 0;
	printf("Enter V1(km/h), V2(km/h), S(km), T(hours):\n");
	scanf("%f %f %f %f", &v1, &v2, &s0, &T);
	float t_meet = s0/(v1+v2);
	S = (v1+v2)*(T-t_meet);
	printf("Result S = %.2fkm", S);
	return 0;
}