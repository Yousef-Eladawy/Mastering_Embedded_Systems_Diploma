/*
 ============================================================================
 Name        : EX6.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, n, sum=0;

	printf("Please enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	for (i=1; i<=n ;i++)
	{
		sum+=i;
	}

	printf("Sum = %d",sum);
}
