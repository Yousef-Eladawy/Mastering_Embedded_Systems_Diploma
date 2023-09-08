/*
 ============================================================================
 Name        : Array_EX5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a[100];
	int i, n ,input;

	printf("Enter no of elements : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);

	for(i=0 ; i<n-1 ; i++)
	{
		scanf("%d ",&a[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &input);


	for(i=0 ; i<n ; i++)
	{
		if(input == a[i])
		{
			printf("Number found at the location = %d", i+1);
			break;
		}
	}
	if(i == n)
	{
		printf("Number not found");
	}

}
