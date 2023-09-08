/*
 ============================================================================
 Name        : EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char c;

	printf("Please enter a character you want to check: ");
		fflush(stdout); fflush(stdin);
		scanf("%c",&c);

		if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			printf("%c is a vowel", c);
		else
			printf("%c is a consonant", c);
}
