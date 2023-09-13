/*
 ============================================================================
 Name        : Mid_Q4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Print_Array(int array[],int n)
{
	int i;

	for(i=0 ; i<n ; i++)
	{
		printf("%d",array[i]);
	}
}

void REV(int array[],int rev[],int n)
{
	int i,x;
	x=n;
	for(i=0 ; i<n ; i++)
	{
		rev[i] = array[--x];
	}
}

void strTOint(char str[],int num[],int n)
{
	int i;
	int rev[n];

	for(i=0 ; i<n ; i++)
	{
		if(str[i] >='0' && str[i] <='9')
			num[i] = str[i] - '0' ;
		else
			printf("Please enter numbers only");
	}
	REV(num,rev,n);
	printf("\nOutput: ");
	Print_Array(rev,n);
}


int main() {

	char arr[6];
	int num[6];
	int len;

	printf("Input: ");
	fflush(stdout); fflush(stdin);
	gets(arr);

	len =strlen(arr);

	strTOint(arr,num,len);
}
