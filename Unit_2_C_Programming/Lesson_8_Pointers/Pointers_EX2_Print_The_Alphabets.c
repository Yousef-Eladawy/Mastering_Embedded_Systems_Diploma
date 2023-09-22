/*
 ============================================================================
 Name        : Pointers_EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char ch = 'A';
	char *pch;
	pch = &ch;

	for(int i=0 ; i <= ('Z'-'A') ;i++)
	printf("%c ",(*pch)+i);

}
