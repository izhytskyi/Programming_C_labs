#include <stdio.h>

int main()
{
	float p1, p2, p3 = 0;
	printf("Enter p1: ");
	scanf("%f", &p1);
	printf("Enter p2: ");
	scanf("%f", &p2);
	printf("Enter p3: ");
	scanf("%f", &p3);
	printf("P1: %.2f, P2: %.2f, P3: %.2f", p1, p2-p1, p3-p2-p1);
	return 0;
}

/*В таксі одночасно сіли три пасажири. Коли перший пасажир вийшов на лічильнику було P1
грн.; коли вийшов другий – P2 грн. скільки мав був заплатити кожен пасажир, якщо в кінці
поїздки лічильник показав P3 грн.? (P1 < P2 < P3)
*/
