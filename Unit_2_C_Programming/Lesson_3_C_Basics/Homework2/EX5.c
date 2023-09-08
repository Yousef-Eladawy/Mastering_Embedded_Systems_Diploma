/*
 ============================================================================
 Name        : EX5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	//	printf("ascii code of:\na = %d\nz = %d\nA = %d\nZ = %d\n", 'a','z','A','Z');

	char c;

	printf("enter a character:");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);

	(c<123 && c>96)? printf("%c is an alphabet",c): (c<91  && c>64)? printf("%c is an alphabet",c): printf("%c is an not alphabet",c);

}
