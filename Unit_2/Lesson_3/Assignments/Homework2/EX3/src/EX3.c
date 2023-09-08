/*
 ============================================================================
 Name        : EX3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b,c;

	printf("Please enter three numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&a ,&b ,&c);

	printf("Largest number = %.2f", (a>b)? (a>c)?a:c : (b>c)?b:c);

}
