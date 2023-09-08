/*
 ============================================================================
 Name        : Array_EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float sum=0;
	float num[100];
	int i,n;

		printf("Enter the numbers of data: ");
		fflush(stdout); fflush(stdin);
		scanf("%d", &n);

		for(i=0 ; i<n ; i++)
		{
				printf("%d.Enter number: ",i+1);
				fflush(stdout); fflush(stdin);
				scanf("%f", &num[i]);

				sum += num[i];
		}

	printf("Average = %.2f", sum/n);

}
