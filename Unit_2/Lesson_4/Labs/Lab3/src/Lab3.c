/*
 ============================================================================
 Name        : Lab3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float matrix [3][3] , Tmatrix [3][3];
	int i, j;
//////////////////////////////////////////////
	for(i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("enter the item (%d , %d) : ", i , j);
			fflush(stdout); fflush(stdin);
			scanf("%f", &matrix[i][j]);
		}
	}
//////////////////////////////////////////////
	printf("the matrix is :\n");
	for(i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			printf("%.2f\t",matrix[i][j]);
		}
		printf("\r\n");
	}
//////////////////////////////////////////////
	printf("the transpose matrix is :\n");

	for(i=0 ; i<3 ; i++)
		{
			for (j=0 ; j<3 ; j++)
			{
				Tmatrix[i][j]=matrix[j][i];
				printf("%.2f\t",Tmatrix[i][j]);
			}
			printf("\r\n");
		}






}
