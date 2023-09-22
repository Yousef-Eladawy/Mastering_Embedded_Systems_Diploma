/*
 ============================================================================
 Name        : Pointers_EX3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[20];
	char *rev;
	int i,len;

	printf("Input a string : ");
	fflush(stdout); fflush(stdin);
	gets(str);

	len = strlen(str);
	rev = str + len-1;


	printf("Reverse of the string is : ");

	for(i=0 ; i<len ;i++)
		{
		printf("%c", *rev);
		rev--;
		}
}
