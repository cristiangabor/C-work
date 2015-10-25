#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


int main()
{
	char CatName[50];
	char catsFood[25];
	char sentence[75]= " ";

	puts("What's the cat dumb name?:");
	gets(CatName);

	puts("What dose he eat?");
	gets(catsFood);

	strcat(sentence, CatName);
	strcat(sentence, " Loves to eat");
	strcat(sentence, catsFood);

	puts(sentence);

	return 0;
}