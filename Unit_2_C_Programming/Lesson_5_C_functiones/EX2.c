/*
 ============================================================================
 Name        : EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
	if(n>0)
		return (n = n * factorial(n-1));

	else
		return 1;
}

int main() {

	int num;

	printf("Enter an positive number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	if(num >=0)
	printf("factorial of %d = %d", num,factorial(num));

	else
		printf("Please enter an positive number");
}
