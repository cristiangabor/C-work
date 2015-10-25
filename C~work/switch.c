#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	char grade = 'A';

	switch(grade){
		case 'A': printf("Sweet!");
				  break;
		case 'B': printf("Could have tried harder!");
				  break;

		case 'C': printf("You din't study!");
				  break;
		case 'D': printf("That's emabrising!");
				  break;
		default : printf("That's even make sence!");

	}

	return 0;

}