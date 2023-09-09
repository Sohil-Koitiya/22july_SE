#include<stdio.h>

main()
{
	char string[20];
	printf("Enter String : ");
	gets(string);
	
	int i;
	int len = 0;
	
	while (string[i] != '\0')
	{
		len++;
		i++;
	}
	printf("Length is = %d",len);
}
