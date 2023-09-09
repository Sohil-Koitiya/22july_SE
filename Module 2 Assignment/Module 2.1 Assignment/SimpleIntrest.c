#include<stdio.h>
main()
{
	int p,r,t;
	printf("Enter the amount of principle amount:");
	scanf("%d",&p);
	printf("Enter the amount of rate of intrest:");
	scanf("%d",&r);
	printf("Enter the amount of time period:");
	scanf("%d",&t);
	printf("The simple intrest is %d",(p*r*t)/100);
}
