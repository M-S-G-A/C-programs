#include "stdio.h"

int factorial(int n);
int combination(int n, int k)

int main(){
	int n;
	printf("\nThis program displays the Pascal Triangle of a given index.\n");
	printf("Enter the value of the index: ");
	scanf("%d", &n);
	
	for (int i = 0; i<=n; i++){
		for (int j = 0; j<=i; j++){
			printf("%d ", combination(i,j));
		}
		printf("\n");
	}
	char cont;
	printf("\n\n\t____Continue(y/n) ?  ");
	scanf("%s", &cont);
	if (cont == 'y' || cont == 'Y'){
		main();
	}
	else{
		printf("\n\nSee you next time!! ");
		return 0;
	}
}

int factorial(int n){
	if (n == 0){
		return 1;
	}
	else {
		return n * factorial(n-1);
	}
}

int combination(int n, int k){
	return factorial(n)/(factorial(k)*factorial(n-k));
}
