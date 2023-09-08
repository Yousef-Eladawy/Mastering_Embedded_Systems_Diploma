/*
 ============================================================================
 Name        : Mid_Q6.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

int check_unique(int arr[],int n)
{
	int i;
	int x = 0;
	for(i=0 ; i<n ; i++)
	{
	//	check_unique(arr,--n);
		if(arr[i] != arr[n])
		{

			if (arr[i] != x)
			x = arr[i];


		}
		else
		{

		}
	}
	return x;

}


#include <stdio.h>
#include <stdlib.h>

int main() {

	int len;
	int a[7] = {4,2,5,2,5,6,4};
	//int a[3] = {4,2,4};

	len = sizeof(a)/sizeof(a[0]);

	printf("\noutput: %d",check_unique(a,len));
}
