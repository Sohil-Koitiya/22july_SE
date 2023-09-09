#include<stdio.h>
main()
{
	int num,i,evensum=0,oddsum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	printf("\nevensum=%d",evensum);
	printf("\noddsum=%d",oddsum);
}
