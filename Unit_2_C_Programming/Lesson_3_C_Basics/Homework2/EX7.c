/*
 ============================================================================
 Name        : EX7.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, n, factorial=1;

	printf("Please enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	if(n<0)
		printf("Error!!! Factorial of negative number doesn't exist");

	else if (n>0)
	{
		for (i=1; i<=n ;i++)
		{
			factorial*=i;
		}

		printf("factorial of (%d) = %d",n,factorial);
	}
	else
		printf("factorial of (%d) = %d",n,0);


}
