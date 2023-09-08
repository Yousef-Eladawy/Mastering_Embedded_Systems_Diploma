/*
 ============================================================================
 Name        : Array_EX1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float a[2][2] ,b[2][2] ,sum[2][2];
	int i,j;

	printf("Enter the elements of matrix (a):\n");
	fflush(stdout); fflush(stdin);

	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &a[i][j]);
		}
	}


	printf("\nEnter the elements of matrix (b):\n");
	fflush(stdout); fflush(stdin);

	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &b[i][j]);
		}
	}

	printf("\nSum Of matrix:\n");
	fflush(stdout); fflush(stdin);

	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{

			sum[i][j] = a[i][j] + b[i][j];

			printf("%.1f\t", sum[i][j]);
			fflush(stdout); fflush(stdin);
		}
		printf("\n");
	}

}
