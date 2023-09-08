/*
 ============================================================================
 Name        : Lab_1.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
	{
	int result=1;

		for(; num>0 ;num--)
			result *= num;
		return result;
	}


int main() {

	printf("Factorial(%d) = %d\n",10 ,factorial(10));
	printf("Factorial(%d) = %d\n",0 ,factorial(0));
	printf("Factorial(%d) = %d\n",5 ,factorial(5));


}
