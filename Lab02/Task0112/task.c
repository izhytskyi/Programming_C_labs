#include <stdio.h>
#include <math.h>

int main()
{
	float numbers[3];
	for(int i = 0; i < 3; i++){
		printf("Enter %d number:\n", i+1);
		scanf("%f", &numbers[i]);
	}
	for(int i = 0; i < 3; i++){
		printf("%d number = %.2f\n", i+1, numbers[i]);
	}
	for(int i = 0; i < 3; i++){
		if(numbers[i] > 0){
			numbers[i] = pow(numbers[i], 2);
		}
		else if(numbers[i] < 0){
			numbers[i] = pow(numbers[i], 3);
		}
		else if(numbers[i] == 0){
		    numbers[i] = 1;
		}
	}
		
	
	for(int i = 0; i < 3; i++){
		printf("%d number = %.2f\n", i+1, numbers[i]);
	}
	return 0;
}

/*12. Дано три дійсних числа. Піднести до квадрату додатні числа і до кубу – від’ємні (число 0
збільшити на 1).*/