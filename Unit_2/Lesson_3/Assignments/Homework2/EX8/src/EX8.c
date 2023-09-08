/*
 ============================================================================
 Name        : EX8.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	char operator;
	float n1, n2;

	printf("Enter the operator you want (+ or - or * or ÷): ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&operator);

	printf("Enter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&n1 ,&n2);

	switch (operator)
	{
	case '+' :
		printf("%.1f + %.1f = %.1f", n1, n2, n1+n2);
		break;

	case '-' :
		printf("%.1f - %.1f = %.1f", n1, n2, n1-n2);
		break;

	case '*' :
		printf("%.1f * %.1f = %.1f", n1, n2, n1*n2);
		break;

	case '÷' :
		printf("%.1f ÷ %.1f = %.1f", n1, n2, n1/n2);
		break;
	}

}
