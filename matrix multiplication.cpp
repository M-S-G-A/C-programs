#include "stdio.h"

int main(){
	int row1,col1,row2,col2;
	
	printf("Enter the number of rows and columns of Matrix1: \n");
	scanf("%d %d", &row1,&col1);
	
	printf("\nEnter the number of rows and columns of Matrix2: \n");
	scanf("%d %d", &row2,&col2);
	
	while (col1!=row2){
		printf("\nMatrix Multiplication impossible, matrices incompatible.\n\n");
		
		printf("Enter the number of rows and columns of Matrix1: \n");
		scanf("%d %d", &row1,&col1);
		
		printf("\nEnter the number of rows and columns of Matrix2: \n");
		scanf("%d %d", &row2,&col2);
	}
	
	int mat1[row1][col1], mat2[row2][col2], mat[row1][col2];
	
	printf("\nWell, now let's fill these matrices\n");
	
	printf("Enter the values of Matrix1:\n");
	for (int i=0; i<row1; i++){
		for (int j=0; j<col1; j++){
			printf("Row %d Col %d = ",i+1,j+1);
			scanf("%d", &mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the values of Matrix2:\n");
	for (int i=0; i<row2; i++){
		for (int j=0; j<col2; j++){
			printf("Row %d Col %d = ",i+1,j+1);
			scanf("%d", &mat2[i][j]);
			
		}
		printf("\n");
	}
	
	printf("The multipliacation of these 2 matrices give: \n");
	for (int i=0; i<row1; i++){
		for (int j=0; j<col2; j++){
			mat[i][j] = 0;
			for (int k=0; k<col1; k++){
				mat[i][j] += mat1[i][k] * mat2[k][j];
			}
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	char cont;
	printf("\nContinue(y/n) ? ");
	scanf("%s", &cont);
	if (cont == 'y' || cont == 'Y'){
		main();
	}
	else{
		return 0;
	}      

		
}