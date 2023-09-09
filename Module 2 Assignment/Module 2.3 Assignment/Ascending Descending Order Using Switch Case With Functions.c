#include<stdio.h>

int ass_dec();

main()
{
	ass_dec();
	return 0;	
}


int ass_dec()
{
	int arr1[5],arr2[5];
	int i,j,temp;
	
	for (i=0;i<5;i++)
	{
		printf("Enter element of arr1 %d: ",i+1);
		scanf("\n%d",&arr1[i]);
	}
	
	for (i=0;i<5;i++)
	{
		printf("Enter element of arr2 %d: ",i+1);
		scanf("\n%d",&arr2[i]);
	}

	int choice;
	printf("Enter User Choice : ");
	scanf("%d",&choice);
	
	
	int ascending,decending;
	
	switch (choice)
	{
		case 1:
			for (i=0;i<5;i++)
			{
				for (j=i+1;j<5;j++)
				{
					if (arr1[i] > arr1[j])
					{
						temp = arr1[i];
						arr1[i] = arr1[j];
						arr1[j] = temp;
					}
				}
			}
			printf("\nAscending = ");	
			for (i=0;i<5;i++)
			{
				printf(" %d ",arr1[i]);
			}
			
			for (i=0;i<5;i++)
			{
				for (j=i+1;j<5;j++)
				{
					if (arr2[i] > arr2[j])
					{
						temp = arr2[i];
						arr2[i] = arr2[j];
						arr2[j] = temp;
					}
				}
			}
			printf("\nAscending = ");	
			for (i=0;i<5;i++)
			{
				printf(" %d ",arr2[i]);
			}
			break;
			
		case 2:
			for (i=0;i<5;i++)
			{
				for (j=i+1;j<5;j++)
				{
					if (arr1[i] < arr1[j])
					{
						temp = arr1[i];
						arr1[i] = arr1[j];
						arr1[j] = temp;
					}
				}
			}
			printf("\nDecending = ");	
			for (i=0;i<5;i++)
			{
				printf(" %d ",arr1[i]);
			}
	

			for (i=0;i<5;i++)
			{
				for (j=i+1;j<5;j++)
				{
					if (arr2[i] < arr2[j])
					{
						temp = arr2[i];
						arr2[i] = arr2[j];
						arr2[j] = temp;
					}
				}
			}
			printf("\nDecending = ");	
			for (i=0;i<5;i++)
			{
				printf(" %d ",arr2[i]);
			}
			
	}
}
