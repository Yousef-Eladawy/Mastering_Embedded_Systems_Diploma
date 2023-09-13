/*
 ============================================================================
 Name        : HW5_EX3.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SComplex
{
	float m_Real;
	float m_Img;
};

struct SComplex Read_Complex(char order[])
{
	struct SComplex x;
	printf("\nfor %s complex number\n",order);

	printf("Enter real and imaginary respectively: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x.m_Real,&x.m_Img);

	return x;
}

struct SComplex Add_Complex(struct SComplex x,struct SComplex y)
{
	struct SComplex z;

	x = Reed_Complex("1st");
	y = Reed_Complex("2nd");

	z.m_Real = x.m_Real + y.m_Real;
	z.m_Img  = x.m_Img  + y.m_Img;

	return z;
}

int main() {

	struct SComplex n1,n2 ,sum;

	sum = Add_Complex(n1,n2);

	printf("\nSum = %0.1f + %0.1fi",sum.m_Real,sum.m_Img);
}
