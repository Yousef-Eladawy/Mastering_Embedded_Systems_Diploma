/*
 ============================================================================
 Name        : Mid_Q1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(char str[],int num[],int n)
{
	int i,j;
	int result=0;

	for(i=0 ; i<n ; i++)
	{
		if(str[i] >='0' && str[i] <='9')
			num[i] = str[i] - '0' ;
		else
			printf("Please enter numbers only");
	}

	for(j=0 ; j<n ; j++)
		{
		result += num[j];
		}
	return result;

}

void Print_Array(char array[],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%c ",array[i]);
	}
}

int main() {

	char str[10];
	int num[10];

	printf("input: ");
	fflush(stdout); fflush(stdin);
	gets(str);

	int len = strlen(str);

	printf("your input is: ");
	Print_Array(str,len);

	printf("\noutput: %d", sum(str,num,len));

}
