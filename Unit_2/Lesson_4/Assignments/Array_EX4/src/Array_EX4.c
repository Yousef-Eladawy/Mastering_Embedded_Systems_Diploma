/*
 ============================================================================
 Name        : Array_EX4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int a[100];
	int i, n ,inserted, location;

	printf("Enter no of elements : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &n);

	for(i=0 ; i<n ; i++)
	{
		a[i] = i+1;
		printf("%d ",a[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &inserted);

	printf("Enter the location : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &location);

	a[location-1] = inserted;

	for(i=location ; i<(n+1) ; i++)
	{
		a[i] = i;
	}

	for(i=0 ; i<n+1 ; i++)
	{
		printf("%d ",a[i]);
	}

}
