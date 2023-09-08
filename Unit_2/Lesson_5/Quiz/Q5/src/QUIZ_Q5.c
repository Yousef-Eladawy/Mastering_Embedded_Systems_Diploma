/*
 ============================================================================
 Name        : QUIZ_Q5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Reset_bit(int num, int bit)
{
	num &= ~(1 << bit);

	return num;
}



int main() {

	int num , bit;

	printf("input number = ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);

	printf("bit position = ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&bit);

	printf("Result after clear bit number (%d) = %d",bit, Reset_bit(num,bit));


}
