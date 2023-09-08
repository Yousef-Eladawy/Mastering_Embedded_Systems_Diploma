/*
 ============================================================================
 Name        : MId_Q7.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum()
{
	static int n=0,z=0;
	if(n<=100)
		{
		z+=n;

		sum(++n);
		}

	else
		printf("sum numbers from 1 to 100 = %d",z);
}

int main() {

	sum();

}
