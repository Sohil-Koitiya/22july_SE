#include<stdio.h>

main()
{
	int row,col,num=65;
	
	for (row=1;row<=5;row++)
	{
		for (col=1;col<=row;col++)
		{
			printf("%c",num+ col-1);
		}
		printf("\n");
	}
}
