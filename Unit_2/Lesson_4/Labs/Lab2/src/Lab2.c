/*
 ============================================================================
 Name        : Lab2.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float y, x[5] = {5, 16, 22, 3.5, 15};
	int i;

	for(i=0 ; i<5 ; i++)
	{
		y = 5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("y(%.2f) = %.2f\n", x[i], y);

	}





}
