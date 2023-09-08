/*
 ============================================================================
 Name        : EX_6.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b,swap;

	printf("Enter value of a : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);

	printf("Enter value of b : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);

	swap = a;
	a = b;
	b = swap;

	printf("\nAfter swapping, value of a = %.2f\nAfter swapping, value of b = %.1f",a,b );



}
