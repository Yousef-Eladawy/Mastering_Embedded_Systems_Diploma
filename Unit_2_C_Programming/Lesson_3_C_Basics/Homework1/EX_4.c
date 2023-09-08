/*
 ============================================================================
 Name        : EX_4.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float n1, n2;

	printf("Enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&n1 ,&n2);

	printf("Product: %.6f", n1*n2);

}

