#include <stdio.h>
#include <stdlib.h>

int main()
{
	char firstName[20];
	char crush[20];
	int numberofBabies;

	printf("What is your name?\n");
	scanf("%s",firstName);

	printf("Who are you going to marry?\n");
	scanf("%s",crush);

	printf("How many babies are you going to have?\n");
	scanf("%d", &numberofBabies);

	printf(" %s and %s are going to have %d of babies.\n",firstName,crush,numberofBabies);

	return 0;
	
}