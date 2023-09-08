/*
 ============================================================================
 Name        : Lab.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,j;

	for (i=0 ; i<=9 ; i++)
	{
		printf("%d ",i);

		for (j=i+1 ;j<=9 ;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
