/*
 ============================================================================
 Name        : Pointers_EX4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[15];
	int *p;
	int i,len;

	p= &len;
	printf("Input the number of elements: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",p);

	//scan elements
	printf("\nInput %d numbers of elements:",len);
	for(i=0 ; i<len ;i++)
		{
		printf("\nelement-%d: ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
		}

	p= arr + len-1;
	//printing in reverse
	printf("\nThe elements of array in reverse order are :");
	for(i=len-1 ; i>=0 ;i--)
		{
		printf("\nelement-%d: %d\n",i+1 ,*p);
		p--;
		}
}
