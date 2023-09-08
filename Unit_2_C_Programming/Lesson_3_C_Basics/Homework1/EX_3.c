/*
 ============================================================================
 Name        : EX_3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int n1, n2;

	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&n1 ,&n2);

	printf("Sum: %d", n1+n2);

}

