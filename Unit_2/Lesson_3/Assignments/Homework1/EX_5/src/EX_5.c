/*
 ============================================================================
 Name        : EX_5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);

	printf("ASCII Value of %c = %d",c,c);

}
