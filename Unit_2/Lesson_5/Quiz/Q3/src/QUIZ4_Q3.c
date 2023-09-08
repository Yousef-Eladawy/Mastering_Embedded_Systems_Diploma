/*
 ============================================================================
 Name        : QUIZ4_Q3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(int rev[],int array[],int n)
{
	int i,f;
	f=n;
	n--;
	for(i=0 ; i<f ; n--, i++)
	{
		rev[i] = array[n];
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

	int arr[100] ,rev[100];

	printf("Enter values of array:");
	fflush(stdout); fflush(stdin);
	Scan_Array(arr,6);

	printf("\nvalues of array: ");
	fflush(stdout); fflush(stdin);
	Print_Array(arr,6);
	printf("\n");

	reverse(rev,arr,6);

	printf("\nvalues of reversed array: ");
	fflush(stdout); fflush(stdin);
	Print_Array(rev,6);
	printf("\n");
}
