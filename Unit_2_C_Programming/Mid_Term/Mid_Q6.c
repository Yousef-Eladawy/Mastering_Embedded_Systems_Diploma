/*
 ============================================================================
 Name        : Mid_Q6.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int unique(int arr[], int n)
{
	int i,j;
	for(i=0 ; i < n ;i++)
	{
		j=-1;
	again:
		j++;
		if (j < n)
		{
			if (arr[i] == arr[j] && i!=j)
			{
				goto finish;
			}
			goto again;
		}
	finish:
		if (j==n)
		{
			printf("\nThis is unique number in array: %d\n",arr[i]);
		}
	}
	return -1;
}

int main() {

	int len;
	//int a[7] = {4,2,5,2,5,7,4};
	int a[3] = {4,2,4};

	len = sizeof(a)/sizeof(a[0]);

	unique(a,len);

}
