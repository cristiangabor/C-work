#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
	
	int tuna ='c';

	if(isalpha(tuna)){
		printf("%c is a letter! \n",tuna);

		if(isupper(tuna)){
			printf("%c is a upper case letter!\n",tuna );
		}else{
			printf("%c is a lower case letter!\n",tuna );
		}
	}else{
		if(isdigit(tuna)){
			printf("%c is a number! \n",tuna);
		}else{
			printf("%c wtf is that! \n",tuna);
		}

	}
	return 0;
}