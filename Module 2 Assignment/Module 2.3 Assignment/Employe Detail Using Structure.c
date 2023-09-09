#include<stdio.h>
#include<string.h>

struct person
{
	char empno[4];
	char empname[6];
	char add[16];
	int age;
}

main()
{
	struct person s;
	
	printf("Enter Employe No : ");
	scanf("%s",&s.empno);
	
	printf("Enter Employe Name : ");
	scanf("%s",&s.empname);
	
	printf("Enter Employe Add : ");
	scanf("%s",&s.add);
	
	printf("Enter Employe Age : ");
	scanf("%d",&s.age);
	
	printf("\nEmploye No : %s",s.empno);
	printf("\nEmploye Name : %s",s.empname);
	printf("\nEmploye Add : %s",s.add);
	printf("\nEmploye Age : %d",s.age);
	
}
