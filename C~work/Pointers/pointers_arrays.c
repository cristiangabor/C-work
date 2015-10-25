#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>


int main()
{

	int i;
	int meatBalls[5] = { 7,9,43,11,24 };

	printf("\n\n\nElement: \t Adress: \t\t Value: \n");
	for(i=0; i<5; i++)
	{
		printf("meatBalls[%d] \t %p \t %d \n",i, &meatBalls[i],meatBalls[i]);

	}
	// print the adress of the first value of meatBalls

	printf("\n meatBalls \t\t %p \n", meatBalls);

	// print the value of the first element of the meatBall
	// dereference it
	printf("\n *meatBalls %d \n", *meatBalls);
	printf("\n (*meatBalls + 2) %d \n", *(meatBalls +2));



	return 0;

}