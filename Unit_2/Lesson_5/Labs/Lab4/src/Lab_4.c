/*
 ============================================================================
 Name        : Lab_4.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void SemiMatrix()
{
	for(int i=0; i<10 ;i++)
	{
		for(int j=i; j<10 ;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


int main() {

	SemiMatrix();

}
