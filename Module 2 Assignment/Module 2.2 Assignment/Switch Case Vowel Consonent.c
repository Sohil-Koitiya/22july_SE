#include<stdio.h>
main()
{
	char alphabet;
	printf("Enter the alphabet:");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
		case 'a':
			printf("It is a vowel");
			break;
		case 'e':
			printf("It is a vowel");
			break;
		case 'i':
			printf("It is a vowel");
			break;
		case'o':
			printf("It is a vowel");
			break;
		case 'u':
			printf("It is a vowel");
			break;
		default:
			printf("It is a Consonent");
	}
}
