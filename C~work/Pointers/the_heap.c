#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *points;
	// alocs memory available from computer for points variable
	//this is used when you dont know how much memory the variable will take.

	points = (int *) malloc(5* sizeof(int));

 	free(points);
}