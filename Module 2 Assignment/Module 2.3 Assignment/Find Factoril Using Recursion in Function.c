#include<stdio.h>

int recursion(int num);

main()
{
	int num;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	
	int factorial;
	factorial = recursion(num);
	
	printf("Factorial is %d",factorial);
	
	return 0;
}

int recursion(int num)
{
	if(num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return num * recursion(num-1);
	}
}
