/*
 ============================================================================
 Name        : HW5_EX1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SStudent
{
	char m_Name[15];
	int m_Roll;
	float m_marks;
};

int main() {

	struct SStudent s;

	printf("Enter infromation of students:\n");

	printf("\nEnter name: ");
	fflush(stdout); fflush(stdin);
	gets(s.m_Name);

	printf("Enter roll number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&s.m_Roll);

	printf("Enter marks: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&s.m_marks);

	printf("\nDisplaying Information\nname: %s\nRoll: %d\nMarks: %0.2f",s.m_Name,s.m_Roll,s.m_marks);

}
