/*
 ============================================================================
 Name        : Pointers_EX1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int m =29;
	int *ab;

	printf("Address of m : 0x%x\nValue of m : %d\n",&m,m);

	ab = &m; //Now ab is assigned with the address of m.
	printf("\nNow ab is assigned with the address of m.\n");
	printf("Address of *ab : 0x%x\nValue of m : %d\n",ab,*ab);

	m = 34;  //The value of m assigned to 34 now.
	printf("\nThe value of m assigned to 34 now.\n");
	printf("Address of *ab : 0x%x\nValue of m : %d\n",ab,*ab);

	*ab = 7;  //The pointer variable ab is assigned with the value 7 now.
	printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : 0x%x\nValue of m : %d\n",&m,m);




}
