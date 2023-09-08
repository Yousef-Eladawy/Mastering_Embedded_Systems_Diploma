/*
 ============================================================================
 Name        : Lab3.c
 Author      : Yousef Hussien
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;

	printf("Please enter two numbers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d", &a, &b);

	printf("the minimum number is %d\n", (a<b)?a:b );
}
