/*
 ============================================================================
 Name        : Mid_Q5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int count_1s(int num)
{
	int i,k;
	int count=0;

	printf("Binary of %d is: ",num);
	for(i=15 ; i>=0 ; i--)
	{
		k = num >> i;
		if(k&1)
			{
			printf("1");
			count++;
			}
		else
			printf("0");
	}
	return count;
}

int main() {

	int num;
	printf("Input: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	printf("\nnumber of ones is: %d",count_1s(num));

}
