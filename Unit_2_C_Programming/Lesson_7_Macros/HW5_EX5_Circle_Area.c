/*
 ============================================================================
 Name        : HW5_EX5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

#define	circle(r,...) printf("Circle "#__VA_ARGS__" = %0.2lf", pi*r*r);

int main(void) {

	int R;

	printf("Enter the radius: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&R);

	circle(R,Area);
}
