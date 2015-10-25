#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	int i;
	int diceRolls;

	for(i=0; i<=20; i++)
	{
		diceRolls= ( rand() % 6) + 1;

		printf("%d \n",diceRolls);


	}
	return 0;
}
