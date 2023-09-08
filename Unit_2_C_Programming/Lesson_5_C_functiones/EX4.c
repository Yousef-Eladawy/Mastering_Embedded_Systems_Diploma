/*
 ============================================================================
 Name        : EX4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base ,int n)
{

	if (n>0)
	{
		return( base*power(base,--n));
	}
	else
		return 1;
}

int main() {

	int num , pow;

	printf("Enter base number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	printf("Enter power number(positive integer): ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&pow);

	printf("%d^%d = %d",num,pow,power(num,pow));

}
