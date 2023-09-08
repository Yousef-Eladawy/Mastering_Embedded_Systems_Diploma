/*
 ============================================================================
 Name        : QUIZ4_Q8.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int last_occurrence(int array[], int n)
{
	int check ,i;
	printf("\nEnter the value you to check its last occurrence:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&check);

	for(i=n-1 ; i>=0 ; i--)
	{
		if (array[i] == check)
			{
			return i+1 ;
			break;
			}
	}
	return -1;
}

void Scan_Array(int array[],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("Enter Element number (%d): ",i+1);
		fflush(stdout); fflush(stdin);
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

	int arr[8];

	printf("Enter array values:\n");
	fflush(stdout); fflush(stdin);
	Scan_Array(arr,7);

	printf("\nArray values are: ");
	Print_Array(arr,7);

	printf("\nlast occurrence is at element number (%d)", last_occurrence(arr,7));

}
