/*
 ============================================================================
 Name        : MId_Q10.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int count_max_1s(int n)
{
	int i,k;
	int count =0;
	int check =0;
	int max = 0;

	printf("binary number of (%d) is: ",n);
	fflush(stdout); fflush(stdin);

	for(i=15 ; i>=0 ; i--)
	{
		k = n >> i;

		if(k&1)
		{
			printf("1");
			if(check == 1)
				++count;
			else
			{
				check =1;
				count =1;
			}
			(count>max) ? max=count : max ;
		}
		else
		{
			printf("0");
			check =0;
		}
	}
	return max;
}

int main() {

	int num;

	printf("Enter an integer number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	printf("\nOutput: %d",count_max_1s(num));

}
