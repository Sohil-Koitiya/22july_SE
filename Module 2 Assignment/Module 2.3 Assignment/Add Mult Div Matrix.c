#include<stdio.h>

int matrix();

main()
{
	matrix();
	return 0;
}


int matrix()
{
	int a[2][3] = {2,1,3,5,4,6};
	int b[2][3] = {7,4,6,1,1,2};
	int c[2][3];
	int d[2][3];
	int e[2][3];
	int row,col;
	
	printf("--- First Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", a[row][col]);
		}
		printf("\n");
	}
	
	printf("--- Second Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", b[row][col]);
		}
		printf("\n");
	}
	
	printf("--- Addition Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", c[row][col] = a[row][col] + b[row][col]);
		}
		printf("\n");
	}
	
	printf("--- subtraction Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", c[row][col] = a[row][col] - b[row][col]);
		}
		printf("\n");
	}
	
	printf("--- Multiplication Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", c[row][col] = a[row][col] * b[row][col]);
		}
		printf("\n");
	}
	
	printf("--- Division Matrix ---\n");
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{
			printf(" %d ", c[row][col] = a[row][col] / b[row][col]);
		}
		printf("\n");
	}
}
