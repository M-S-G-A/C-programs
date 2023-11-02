#include "stdio.h"

int power(int number, int expo){
	if (expo == 0){
		return 1;
	}
	else {
		return number * power(number, expo-1);
	}
}

int main(){
	int num, expo;
	float ans;
	printf("\nEnter the number and exponent:\n");
	scanf("%d %d", &num, &expo);
	
	if (expo>0){
	ans = power(num, expo);
	}
	if (expo == 0){
		printf("\n%d to the power %d is 1.", num, expo);
		goto end;
	}
	else{
		ans = (1.0)/power(num, (-1)*expo);
	}
	
	printf("\n%d to the power %d is %.2f.", num, expo,ans);
	
	end:
	char cont;
	printf("\n\n\tContinue(y/n) ?  ");
	scanf("%s", &cont);
	if (cont == 'y' || cont == 'Y'){
		main();
	}
	else{
		printf("\n\nSee you next time!! ");
		return 0;
	}
}