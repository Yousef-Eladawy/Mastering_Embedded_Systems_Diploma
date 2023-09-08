/*
 ============================================================================
 Name        : BreakTest.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float sum=0,num;
	int i ,max;

	printf("enter max input numbers : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &max);

	for(i=0 ; i<(max) ; i++)
	{
		printf("enter  number (%d) : ", i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f", &num);

		if(num<0)
			break;

		sum+=num;
	}
	printf("average = %.2f", sum/i);

}
