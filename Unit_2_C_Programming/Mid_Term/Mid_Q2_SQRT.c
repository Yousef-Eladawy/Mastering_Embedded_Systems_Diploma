/*
 ============================================================================
 Name        : Mid_Q2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double square_root(int num)
{
	double i,result;
	result = num/2;
	if (num>0)
	{
		while(i != result)
		{
			i = result;
			result = ( num/i + i)/2;
		}
	}
	else
		return 1;
	return result;
}

int main() {

	int x;

	printf("Enter a positive integer number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	printf("Square root of (%d) = %0.3lf",x,square_root(x));
}
