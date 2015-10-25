#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	int year1;
	int year2;
	int age;

	printf("Please enter the first year:\n");
	scanf("%d",&year1);

	printf("Please enter the second year:\n");
	scanf("%d",&year2);

	age= year1 - year2;

	printf("The age is: %d \n",age);

	age=abs(age);

	printf("The age is: %d \n",age);

	return 0;
}