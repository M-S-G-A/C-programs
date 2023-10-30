#include "stdio.h"

int factorial(int n);
int combination(int n, int k);


int main(){
	int n,k;
	printf("\nThis program evaluates a k-Combination of a set of n elements.\n");
	printf("\nEnter the value n and that of k:\n");
	scanf("%d %d", &n, &k);
	
	if (n<k){
		printf("\n\n%d Combination %d is 0.",n,k);
		goto end;
	}
	
	printf("\n\n%d Combination %d is %d.",n,k, combination(n,k));
	
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