/*
 ============================================================================
 Name        : HW5_EX2.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SDistance
{
	int m_Feet;
	float m_inch;
};

struct SDistance Read_Dist(char order[])
{
	struct SDistance x;
	printf("\nEnter information for %s distance\n",order);

	printf("Enter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x.m_Feet);

	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x.m_inch);

	return x;
}

int main() {

	struct SDistance d1,d2,sum;

	d1 = Reed_Dist("1st");
	d2 = Reed_Dist("2nd");

	sum.m_Feet = d1.m_Feet + d2.m_Feet;
	sum.m_inch = d1.m_inch + d2.m_inch;

	// 12 inch = 1 feet
	if (sum.m_inch > 12)
	{
		sum.m_Feet++;
		sum.m_inch -= 12;
	}

	printf("\nSum of distances = %d'-%0.1f\"",sum.m_Feet,sum.m_inch);

}
