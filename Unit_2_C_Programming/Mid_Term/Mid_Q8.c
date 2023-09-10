/*
 ============================================================================
 Name        : Mid_Q8.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void REV(int array[],int rev[],int n)
{
	int i,x;
	x=n;
	for(i=0 ; i<n ; i++)
	{
		rev[i] = array[--x];
	}
}


void Scan_Array(int array[],int n)
{
	int i;

	printf("Enter values of array:\n");
	fflush(stdout); fflush(stdin);

	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&array[i]);
	}
}

void Print_Array(int array[],int n)
{
	int i;

	for(i=0 ; i<n ; i++)
	{
		printf("%d ",array[i]);
	}
}

int main() {

	int arr[5],rev[5];

	Scan_Array(arr,5);
	REV(arr,rev,5);

	printf("\nvalues of array: ");
	fflush(stdout); fflush(stdin);
	Print_Array(arr,5);

	printf("\nvalues of reversed array: ");
	fflush(stdout); fflush(stdin);
	Print_Array(rev,5);
}
