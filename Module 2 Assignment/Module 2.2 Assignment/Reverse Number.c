#include<stdio.h>
main()
{
	int num,r;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0)
	{
		r = (num%10);
		printf("%d",r);
		num=(num/10);
	}
}
