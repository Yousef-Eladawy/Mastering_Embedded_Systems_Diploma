/*
 ============================================================================
 Name        : Lab_2.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcmin(int values[] , int n)
		{
	int min = values[0];
	for (int i=0 ;i<n;i++)
	{
		if (values[i]<min)
			min = values[i];
	}
		return min;
		}

int main(void) {

	int arrayX[6] = {5,8,3,6,7,2};
	int arrayY[6] = {5,8,3,6,7,1};
	int arrayZ[5] = {5,8,3,6,7};

	printf("the min of X_values = %d\nthe min of Y_values = %d\nthe min of Z_values = %d\n",calcmin(arrayX,6),calcmin(arrayY,6),calcmin(arrayZ,5));


}
