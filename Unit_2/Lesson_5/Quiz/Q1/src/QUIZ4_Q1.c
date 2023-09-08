/*
 ============================================================================
 Name        : QUIZ4_Q1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

	char user[100] ,str[100];

	printf("Enter string:");
	fflush(stdout); fflush(stdin);
	gets(str);


	printf("Enter your name:");
	fflush(stdout); fflush(stdin);
	gets(user);


		if(stricmp(user,str) == 0)
			printf("Identical");

		else
			printf("Not Identical");

}
