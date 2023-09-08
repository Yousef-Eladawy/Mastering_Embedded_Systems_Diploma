/*
 ============================================================================
 Name        : EX4.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float num;

	printf("enter a number: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&num);

	(num>0)? printf("%.2f is positive",num): (num<0)? printf("%.2f is negative",num):printf("you entered zero");

}
