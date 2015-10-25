#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{

	int tuna = 10;
	int tuna1 =10;

	printf("The memory adress fro tuna variable is: %p \n", &tuna);

	
	printf("Adress: \t  \t Name: \t Value \n");
	printf(" %p \t %s \t %d \n\n", &tuna, "tuna" , tuna);
	


	printf("Adress: \t  \t Name: \t Value \n");
	printf(" %p \t %s \t %d \n\n", &tuna1, "tuna1" , tuna1);


	int *pTuna = &tuna;

	*pTuna =71;

	printf("Adress: \t  \t Name: \t Value \n");
	printf(" %p \t %s \t %p \n\n", &pTuna, "pTuna" , pTuna);
	
	printf(" %d \n\n\n", *pTuna);
	printf("%d \n", tuna);

	return 0;

	
}