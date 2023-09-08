/*
 ============================================================================
 Name        : String_EX1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char c, str[100];
	int freq=0 , i;

	printf("Enter a string: ");
	fflush(stdout); fflush(stdin);
	gets(str);

	printf("\nEnter a character to find frequency: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);

	for(i=0 ; i<(strlen(str)) ; i++)
	{
		if (c == str[i])
		{
			freq++;
		}
	}

	printf("\nfrequency of %c = %d",c,freq);

}
