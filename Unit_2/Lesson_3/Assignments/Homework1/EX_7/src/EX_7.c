/*
 ============================================================================
 Name        : EX_7.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b;

	printf("Enter value of a: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping, value of a = %.2f\nAfter swapping, value of b = %.1f",a,b );

}
