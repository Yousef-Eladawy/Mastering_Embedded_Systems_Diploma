/*
 ============================================================================
 Name        : Lab2.c
 Author      : Yousef Hussien
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;

	printf("Please enter three values:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &a,&b,&c);


	if (a>b)
	{
		if (a>c)
			printf("the largest value is: %d\n",a);
		else
			printf("the largest value is: %d\n",c);
	}
	else
	{
		if (b>c)
			printf("the largest value is: %d\n",b);
		else
			printf("the largest value is: %d\n",c);
	}

}
