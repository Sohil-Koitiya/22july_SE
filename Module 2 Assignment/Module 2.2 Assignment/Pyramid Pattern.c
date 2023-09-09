#include<stdio.h>

main()
{
	int row,col,num;
	
	for (row=1;row<=5;row++)
	{
		for (col=row;col<5;col++)
		{
			printf(" ");
		}
		for (num=1;num<(row*2);num++)
		{
			printf("*");
		}
		printf("\n");
	}
}
