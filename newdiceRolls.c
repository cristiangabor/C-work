#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int i;
	int suma;
	int diceRolls;
	int repetitii=0;
	do{
		suma = 0;
		repetitii +=1;
		for(i=1;i<=3;i++){
			diceRolls= ( rand() % 6) + 1;
			printf("For %d dice, result is: %d \n",i,diceRolls);
			suma += diceRolls;
		}

		printf("The sum for %d rolls is: %d \n",i,suma);


	}while(repetitii<=5);


	return 0;




}