/*
 ============================================================================
 Name        : EX3.c
 Author      : Yousef Eladawy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reverse()
{
	char c;
	scanf( "%c", &c) ;
	if( c != '\n')
	{
		Reverse( ) ;
		printf("%c", c) ;
	}
}


int main( )
{
	printf( "Enter a sentence: ");
	fflush(stdout); fflush(stdin);
	Reverse( ) ;
	return 0;
}
