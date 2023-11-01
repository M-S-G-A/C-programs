#include "stdio.h"
int n;
int max(int numbers[1000]);
int min(int numbers[1000]);
int hcf(int min, int numbers[1000]);
int lcm(int max, int numbers[1000]);

int main(){
	int mini, HCF,maxi, LCM;
	printf("\nHow many numbers do you want to enter? ");
	scanf("%d", &n);
	
	int numbers[1000];
	printf("Enter the values: \n");
	for (int i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	
	mini = min(numbers);
	HCF = hcf(mini, numbers);
	printf("\n\nThe HCF is %d.",HCF);
	
	maxi = max(numbers);
	LCM = lcm(maxi, numbers);
	printf("\n\nThe LCM of these numbers is %d.",LCM);

	char cont;
		printf("\n\n*****Continue(y/n) ? ");
		scanf("%s", &cont);
		if (cont == 'y' || cont == 'Y'){
			main();
		}
		else{
			return 0;
		}
	
}

int min(int numbers[1000]){
	int num = numbers[0];
	for (int i = 1; i<n; i++){
		if(num > numbers[i]){
			num = numbers[i];
		}
	}
	return num;
}

int max(int numbers[1000]){
	int num = numbers[0];
	for (int i = 1; i<n; i++){
		if(num < numbers[i]){
			num = numbers[i];
		}
	}
	return num;
}

int hcf(int min, int numbers[1000]){
	int count = 0;
	for (int index = 0; index<n; index++){
		if (numbers[index]%min == 0){
				count += 1; 
			}
		}
	if (count == n){
			return min;
		}
	else{
			count = 0;
			min -= 1;
			return hcf(min, numbers);	
		}
}

int lcm(int max, int numbers[1000]){
	int count = 0;
	for (int index = 0; index < n; index++){
		if (max%numbers[index] == 0){
			count += 1;
		}
	}
	if (count==n){
		return max;
	}
	else{
		count = 0;
		max += 1;
		return lcm(max, numbers);
	}
	
}

	
