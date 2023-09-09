#include<stdio.h>
main()
{
	int arr[4] = {1,5,6,2};
	
	int i,sum=0;
	
	for (i=0;i<4;i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of Array is : %d",sum);
}
