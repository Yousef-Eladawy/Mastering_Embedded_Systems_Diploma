/*
 ============================================================================
 Name        : QUIZ4_Q2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Swap(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
}

void Scan_Array(int array[],int n)
{
	int i;
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

	int a[10],b[10],c[10];

	printf("Enter values of array a:");
	fflush(stdout); fflush(stdin);
	Scan_Array(a,10);

	printf("Enter values of array b:");
	fflush(stdout); fflush(stdin);
	Scan_Array(b,5);


	printf("BEFORE SWAPPING\n\nvalues of array a: ");
	fflush(stdout); fflush(stdin);
	Print_Array(a,10);

	printf("\nvalues of array b: ");
	fflush(stdout); fflush(stdin);
	Print_Array(b,5);
	printf("\n\n");

	Swap(a,b,c,10);

	printf("AFTER SWAPPING\n\nvalues of array a: ");
	fflush(stdout); fflush(stdin);
	Print_Array(a,5);

	printf("\nvalues of array b: ");
	fflush(stdout); fflush(stdin);
	Print_Array(b,10);

}
