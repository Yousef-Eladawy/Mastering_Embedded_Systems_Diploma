/*
 ============================================================================
 Name        : Lab4.c
 Author      : Yousef Hussien
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum =0;
	int i;

	for(i=1 ; i<=99 ;i++)
	{
		sum = sum + i;
	}
	printf("Summation of values from 1 to 99 is: %d",sum);
	fflush(stdout);
}
