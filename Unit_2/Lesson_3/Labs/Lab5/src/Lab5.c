/*
 ============================================================================
 Name        : Lab5.c
 Author      : Yousef Hussien
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, Stud_Num;
	float degree = 0 , sum = 0, average = 0 ;

	printf("Please enter number of the students: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &Stud_Num);

	for (i=1 ; i<=Stud_Num ;i++)
	{
		printf("Please enter student (%d) degree: ",i);
		fflush(stdout); fflush(stdin);
		scanf("%f", &degree);

		sum += degree;
	}

	average = sum/Stud_Num;

	printf("The average degree of (%d) students is: %f", Stud_Num, average);
}
