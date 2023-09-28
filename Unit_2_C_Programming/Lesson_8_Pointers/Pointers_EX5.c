/*
 ============================================================================
 Name        : Pointers_EX5.c
 Author      : Yousef Eladawy
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SEmployee
{
	char m_Name[10];
	int m_ID;

};


int main() {

	struct SEmployee emp[3] = {{"Sara",1004},{"Ali",1003},{"Alex",1002}};
	struct SEmployee (*arr[]) = {&emp[0],&emp[1],&emp[2]};
	struct SEmployee (*(*ptr)[3]) = &arr;

	printf("Employee Name : %s\nEmployee ID : %d\n",(*(*ptr)+2)->m_Name,(*(*ptr)+2)->m_ID);

}
