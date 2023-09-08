/*
 ============================================================================
 Name        : Mid_Q9.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev_words(char word1[] ,char word2[], int n, char reversed[])
{
	//char reversed[n];
	int i,j,k;
	for(i=0 ; i<n ; i++)
	{
		if(word2[i] != '\0')
			reversed[i] = word2[i] ;

		else
			break;
	}
	reversed[i] = ' ';

	for(j=i+1 ,k=0; j<n ; k++,j++)
	{
		if(word1[k] != '\0')
			reversed[j] = word2[k] ;

		else
			break;
	}
	reversed[j] = '\0';

	//printf("output: %s",reversed);
}


void separte(char name[], int n,char rev[])
{
	char first[15],second[15];
	int i,j;
	//first name
	for(i=0 ; i<n ; i++)
	{
		if(name[i] != ' ')
			first[i] = name[i] ;

		else
			break;
	}
		first[i] = '\0';
	//second name
	for(j=i+1 ; j<n ; j++)
	{
		if(name[j] != '\0')
			second[j] = name[j] ;

		else
			break;
	}
		second[j] = '\0';

		rev_words(first,second,n,rev);
}



int main() {

	char name[30];
	char rev[30];
	//int len;

	printf("Enter your name: ");
	fflush(stdout); fflush(stdin);
	gets(name);

	//len = strlen(name);

	separte(name, 30,rev);

	printf("output: %s",rev);

}
