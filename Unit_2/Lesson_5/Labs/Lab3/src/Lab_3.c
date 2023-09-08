/*
 ============================================================================
 Name        : Lab_3.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int findName(char names[][14], int n, char name[])
{
	int value;
	for (int i=0; i<n ;i++)
	{
		value = stricmp(name ,names[i]);

		if (value == 0)
			break;
	}

	return value;
}

int main() {

	char name[14];
	char names[5][14] = {"Alaa", "Osama", "Mamdouh","Samy", "Hossain"};

	printf("Enter your first name:");
	fflush(stdout); fflush(stdin);
	gets(name);


	if( findName (names, 5, name) ==1)
		printf("Welcome");
	else
		printf("Goodbye");



}
