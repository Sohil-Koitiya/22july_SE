#include<stdio.h>

struct employee
{
	int empno;
	char empname[10];
	char empadd[10];
	int empage;
};

main()
{
	printf("Enter Employee Details.\n");
	
	struct employee s1,s2,s3,s4,s5;
	
	printf("Enter Empno,Employee Name,Employee Add and Employee Age of Employee 1 : ");
	scanf("%d %s %s %d",&s1.empno,&s1.empname,&s1.empadd,&s1.empage);
	
	printf("Enter Empno,Employee Name,Employee Add and Employee Age of Employee 2 : ");
	scanf("%d %s %s %d",&s2.empno,&s2.empname,&s2.empadd,&s2.empage);
	
	printf("Enter Empno,Employee Name,Employee Add and Employee Age of Employee 3 : ");
	scanf("%d %s %s %d",&s3.empno,&s3.empname,&s3.empadd,&s3.empage);
	
	printf("Enter Empno,Employee Name,Employee Add and Employee Age of Employee 4 : ");
	scanf("%d %s %s %d",&s4.empno,&s4.empname,&s4.empadd,&s4.empage);
	
	printf("Enter Empno,Employee Name,Employee Add and Employee Age of Employee 5 : ");
	scanf("%d %s %s %d",&s5.empno,&s5.empname,&s5.empadd,&s5.empage);
	
	
	printf("%d %s %s %d\n",s1.empno,s1.empname,s1.empadd,s1.empage);
	printf("%d %s %s %d\n",s2.empno,s2.empname,s2.empadd,s2.empage);
	printf("%d %s %s %d\n",s3.empno,s3.empname,s3.empadd,s3.empage);
	printf("%d %s %s %d\n",s4.empno,s4.empname,s4.empadd,s4.empage);
	printf("%d %s %s %d\n",s5.empno,s5.empname,s5.empadd,s5.empage);
}
