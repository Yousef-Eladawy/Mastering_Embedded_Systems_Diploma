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

void rev_words(char str[],int len ,int end)
{
	int i, j, startIndex;
	for(i = len - 1; i >= 0; i--)
		{
			if(str[i] == ' ' || i == 0)
			{
				if(i == 0)
				{
					startIndex = 0;
				}
				else
				{
					startIndex = i + 1;
				}
				for(j = startIndex; j <= end; j++)
				{
					printf("%c", str[j]);
				}
				end = i - 1;
				printf(" ");
			}
		}
}

int main()
{
  	char str[100];
  	int len, endIndex;

  	printf("Enter a String: ");
  	fflush(stdout); fflush(stdin);
  	gets(str);

  	len = strlen(str);
  	endIndex = len - 1;

  	printf("\nReversed String: ");

  	rev_words(str,len ,endIndex);
}
