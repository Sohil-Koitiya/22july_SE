#include<stdio.h>
#include<string.h>

main()
{
	char string1[20],string2[20];
	
	printf("Enter String1 : ");
	gets(string1);
	
	strcpy(string2,string1);
	
	strrev(string2);
	
	if (strcmp(string1,string2) == 0)
	{
		printf("This string is palindrom.");
	}
	else
	{
		printf("This string is not palindrom.");
	}
}
