/*
 ============================================================================
 Name        : Lab1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	float degrees [10];


	for(i=0 ; i<10 ; i++)
	{
		printf("enter student %d degree : ", i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f", &degrees[i]);
	}

	for(i=0 ; i<10 ; i++)
	{
		printf("student %d degree is : %f\n",i+1, degrees[i]);
		fflush(stdout); fflush(stdin);
	}

}
