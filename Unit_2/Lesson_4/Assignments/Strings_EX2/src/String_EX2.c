/*
 ============================================================================
 Name        : String_EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[100];
	int len=0;

	printf("Enter a string: ");
	fflush(stdout); fflush(stdin);
	gets(str);

	while(str[len] != 0)
	{
		len++;
	}

	printf("\nLength of string: %d", len);

}
