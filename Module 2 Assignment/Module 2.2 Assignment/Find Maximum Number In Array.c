#include<stdio.h>
main()
{
	int arr[4] = {1,5,6,2};
	
	int i,max=0;
	for (i=0;i<4;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Maximum Value is : %d",max);
}
