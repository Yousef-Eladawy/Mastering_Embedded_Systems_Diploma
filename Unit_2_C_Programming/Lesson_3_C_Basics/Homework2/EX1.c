/*
 ============================================================================
 Name        : EX1.c
 Author      : Yousef Eladawy
 Version     :

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int number;

	printf("Please enter an integer you want to check: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&number);

	if (number%2 == 0)
	{
		printf("%d is even \n",number);
		fflush(stdout); fflush(stdin);
	}
	else
	{
		printf("%d is odd \n",number);
		fflush(stdout); fflush(stdin);
	}

}
