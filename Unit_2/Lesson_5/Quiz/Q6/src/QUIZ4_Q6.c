/*
 ============================================================================
 Name        : QUIZ4_Q6.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void num (int n)
{
	int c,k;

		for (c=31 ; c>=0 ; c--)
		{
			k = n >> c;

			if (k&1)
				printf("1");
			else
				printf("0");
		}

		k = n >> 3;

		if (k&1)
			printf("\n4th LSB is 1");
		else
			printf("\n4th LSB is 0");
}



int main() {

	int n;

	printf("Enter integer number:");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	printf("\nDecimal >> %d | Binary >> ",n);
	fflush(stdout); fflush(stdin);

	num(n);


}
