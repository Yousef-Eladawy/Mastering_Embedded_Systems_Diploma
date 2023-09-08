/*
 ============================================================================
 Name        : Array_EX3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int matrix[10][10] , tmatrix[10][10];
	int i,j,r,c;

	printf("Enter rows and column of matrix: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &r,&c);

	printf("Enter elements of matrix: \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%d", &matrix[i][j]);
		}

	}

	printf("\nEntered matrix: \n");
	for(i=0 ; i<r ; i++)
		{
			for(j=0 ; j<c ; j++)
			{
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}

	printf("\nTranspose of matrix: \n");
		for(i=0 ; i<c ; i++)
			{
				for(j=0 ; j<r ; j++)
				{
					tmatrix[i][j] = matrix[j][i];
					printf("%d\t",tmatrix[i][j]);
				}
				printf("\n");
			}

}
