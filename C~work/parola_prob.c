#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
	char password[10]="auchanA10";

	int uppercase, number,dollar;
	uppercase=number=dollar=0;
	int i;

	for(i=0; i<=strlen(password); i++){
		if(isupper(password[i])){
			uppercase++;
		}
		if(isdigit(password[i])){
			number++;
		}
		else if(password[i]=='$'){
			dollar++;
		}
	}
		
	if(uppercase>=1 && number >=1 && dollar>=1)
		{
			printf("Very well! That's a good password!");
		}
	else
		{
			printf("Not quite good Sir!");
		}	

	return 0;
}