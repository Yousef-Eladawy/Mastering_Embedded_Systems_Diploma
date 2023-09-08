/*
 ============================================================================
 Name        : String_EX3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[100],rev[100];
	int i, len;


	printf("Enter a string  : ");
	fflush(stdout); fflush(stdin);
	gets(str);

	len = strlen(str);

	for(i= len; i>=0; i--)
	{
		rev[len-i] = str[i-1];
	}

	rev[len] = 0;

	printf("Reverse string is : %s\n",rev);
}
