#include <stdio.h>

void main(){
	printf("Welcome");
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	if(n % 2 == 0){
		printf("You entered even number!");
	}else{
		printf("You entered odd number!");
	}
	printf("Thank u!");
}

