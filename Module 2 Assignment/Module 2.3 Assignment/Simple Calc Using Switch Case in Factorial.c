#include<stdio.h>

int calc();

main()
{
	calc();
	return 0;	
}

int calc()
{
	int x,y;
	int calc;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);
	
	printf("Enter your choice : ");
	scanf("%d",&calc);
	
	switch (calc)
	{
		case 1:
			printf("Adition of %d and %d = %d",x,y,x+y);
			break;
		case 2:
			printf("Subtraction of %d and %d = %d",x,y,x-y);
			break;
		case 3:
			printf("Multiplication of %d and %d = %d",x,y,x*y);
			break;
		case 4:
			printf("Division of %d and %d = %d",x,y,x/y);
			break;
		default:
			printf("Invalid Input");
	}
}
