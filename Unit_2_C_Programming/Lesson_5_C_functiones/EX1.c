/*
 ============================================================================
 Name        : EX1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int num)
{
	int i,tof=0;
	for (i=2 ; i<=num/2 ; ++i)
	{
		if(num%i == 0)
		{
			tof = 1;
			break;
		}
	}
	return tof;
}


int main() {

	int min,max;
	int i,check;

	printf("Enter two numbers (intervals): ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&min,&max);

	printf("prime numbers between %d and %d are: ",min,max);

	for(i=min+1 ; i< max ; ++i)
	{
		check = prime(i);

		if (check == 0)
			printf("%d ",i);
	}

}
