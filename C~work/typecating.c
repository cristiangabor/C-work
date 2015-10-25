#include <stdio.h>
#include <stdlib.h>

int main()
{
	float avgProfit;
	int priceofPumkin = 10;
	int sales=59;
	int daysWorked =7;

	avgProfit = ((float)priceofPumkin * (float)sales) /(float)daysWorked;

	printf("Average dailly profit is $%.2f\n",avgProfit);

	return 0;
	
}
