/*
 ============================================================================
 Name        : QUIZ4_Q4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void convert_to_int(char array[], int num[],int len)
{
	int  i;

	for (i=0 ; i<len ; i++)
	{
		num[i] = atoi (array[i]);
	}
}

void Print_Array_int(int array[],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",array[i]);
	}
}

void Print_Array_char(char array[],int n)
{
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("%c ",array[i]);
	}
}

int main() {

	int num [15];
	char asci [10] = {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39};

	printf("\nasci values are: ");
	Print_Array_char(asci,10);

	convert_to_int(asci, num , 10);

	printf("\ninteger values are: ");
	Print_Array_int(num,10);
}
