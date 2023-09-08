/*
 ============================================================================
 Name        : Lesson3_Lab1.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char choice;
	float radius;
	float pi= 3.14159;
	float Area, circumference;
	//Taking radius value
	printf("Please enter circle radius: ");
	fflush(stdout); fflush(stdin);
	scanf ("%f",&radius);
	//Area OR circumference OR both
	printf("enter a to print the area, c to print the circumference, and b to print Both");
	printf("Please enter your choice: ");
	fflush(stdout); fflush(stdin);
	scanf ("%c",&choice);
	//calc. area AND circumference
	Area = pi*radius*radius;
	circumference = 2*pi*radius;

	//Print the values according to user's choice
	if(choice == 'A' || choice == 'a')
	{
		printf("The Area is: %f\n",Area);
	}

	else if(choice == 'C' || choice == 'c')
	{
		printf("The circumference is: %f\n",circumference);
	}
	else if(choice == 'B' || choice == 'b')
	{
		printf("The Area is: %.2f ,and the circumference is: %.2f\n",Area,circumference);
	}
	else
	{
		printf("Wrong Choice, Please enter a OR b OR c \n");
	}

}
