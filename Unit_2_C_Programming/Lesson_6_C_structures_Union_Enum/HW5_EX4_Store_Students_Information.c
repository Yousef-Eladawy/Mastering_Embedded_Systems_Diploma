/*
 ============================================================================
 Name        : HW5_EX4.c
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
	int m_marks;
};

struct SStudent Read_Info(int roll)
{
	struct SStudent x;

	x.m_Roll=roll;
	printf("\nFor roll number %d\n",roll);

	printf("Enter name: ");
	fflush(stdout); fflush(stdin);
	gets(x.m_Name);

	printf("Enter marks: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x.m_marks);

	return x;
}

void Display_Info(struct SStudent x)
{
	printf("\nInformation For roll number %d:\n",x.m_Roll);
	printf("Name: %s\n",x.m_Name);
	printf("Marks: %d\n",x.m_marks);
}

int main() {

	struct SStudent s[10];
	int i;

	//reading data
	printf("Enter information of students:\n");
	for(i=0 ; i<(sizeof(s)/sizeof(s[0])); i++)
	{
		s[i] = Read_Info(i+1);
	}

	//Displaying data
	printf("\nDisplaying Information of students:\n");
	for(i=0 ; i<(sizeof(s)/sizeof(s[0])) ; i++)
	{
		Display_Info(s[i]);
	}


}
