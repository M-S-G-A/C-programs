#include "stdio.h"
#include "math.h"

int main(){
	int choice;
	int arr[100];
	int to_conv, n = 0, result = 0;
	int number_10;
	int i = 0, base=0;
	
	
	printf("\n\nWhat do you wish to do? \n");
	printf("1 - Convert a number from base 10 to any base.\n2 - Convert from any base to base 10\n\n");
	printf("Choice: ");
	scanf("%d", &choice);
	switch (choice){
		case 1:
			
			printf("\nEnter the value you want to convert: ");
			scanf("%d", &number_10);
			
			printf("\nIn what base do you want to convert? ");
			scanf("%d", &base);
			
			while (number_10 != 0){
				arr[i] = number_10%base;
				number_10 /= base;
				i+=1;  		// i represents the number of digits we obtain in that base
			}
			
			printf("That in base %d is: ",base);
			for (int j = i-1; j>=0;j--){
				printf("%d", arr[j]);
			}
			break;
			
		case 2:
			
			printf("Enter the value you want to convert: ");
			scanf("%d", &to_conv);
			
			printf("\nIn what base is that value? ");
			scanf("%d", &base);
			
			while (to_conv != 0){
				arr[n] = to_conv%10;
				to_conv /= 10;
				n += 1; 		// n represents the number of digits we obtain in that base
			}
			
			//Verification: a number in that base can't have a figure greater than the base
			for (int j = 0; j<n; j++){
				if (arr[j] >= base){
			 		printf("\nThis value isn't in base %d", base);
			 		goto end;
				}
				else{
					result += arr[j]*pow(base,j);
				}
			}
			
			printf("That number in base 10 is: %d",result);
			break;
			
			end:
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
}