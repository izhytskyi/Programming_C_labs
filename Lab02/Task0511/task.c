#include <stdio.h>

int main(){
	char *months[13];
	months[0] = "zero :)";
	months[1] = "January";
	months[2] = "February";
	months[3] = "March";
	months[4] = "April";
	months[5] = "May";
	months[6] = "June";
	months[7] = "July";
	months[8] = "August";
	months[9] = "September";
	months[10] = "October";
	months[11] = "November";
	months[12] = "December";
	int a = 0;
	printf("Enter a number:\n");
	scanf("%d", &a);
	for(int i = 0; i < 13; i++){
		if(i == a){
			printf("\n%s\n", months[i]);
		}
	}
	return 0;
}
/*11. Дано ціле число
n (1 n 12)
, яке вказує порядковий номер місяця в році. За введеним
значенням
n
надрукувати назву відповідного місяця.*/