/*
 ============================================================================
 Name        : Mid_Q3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int num)
{
	int i;
	int check = 1; //prime

	for(i=2 ; i< num-1 ; i++)
	{
		if(num%i == 0)
		{
			check = 0; //not prime
		}
	}
	return check;
}

int main() {

	int min,max;
	int i;

	printf("n1 = ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&min);

	printf("n2 = ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&max);

	printf("prime numbers between %d and %d are: ",min,max);

	for(i= min ; i <= max ; i++)
	{
		if (prime(i) == 1)
		{
			printf("%d ",i);
		}
	}

}
