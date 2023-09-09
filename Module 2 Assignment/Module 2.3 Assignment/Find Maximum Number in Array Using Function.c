#include<stdio.h>

int max();

main()
{
	int max();
	return max(5);
	
};

int max()
{
	int arr[5];
	int i,max;
	
	for (i=0;i<5;i++)
	{
		printf("Enter Numbers %d: ",i+1);
		scanf("\n%d",&arr[i]);
	}
	
	max = arr[0];
	
	for (i=0;i<5;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Maximum Numbers is : %d",max);
	
}
