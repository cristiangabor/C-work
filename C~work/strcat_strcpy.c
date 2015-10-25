#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
	char nume[500] ="Cristi";


	strcat(nume," Buna");
	strcat(nume," Imi pare bine sa te cunosc de aproape si sa stiu ca esti bine si toate cele intamplate!");

	printf(" %s \n",nume);


	strcpy(nume,"Cristi e cel mai tare!");
	printf("%s \n",nume);

	return 0;
}
