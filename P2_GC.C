// SIMPLE GRADE CALCULATER

#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	char grade;
	clrscr();
	marks=100;
	printf("enter your marks:");
	scanf("%d",&marks);
	grade=(marks>=90)?('A'):
		  (marks>=80)?('B'):
		  (marks>=60)?('C'):
		  (marks>=50)?('D'):('F');

	printf("your grade is:%c",grade);
	////////////////////////////////////////////////////////////////////////
	//	Q.2

	switch(grade)
	{
		case'A':
			printf("\nEXCELLENT WORK");
		break;
		case'B':
			printf("\nWELL DONE");
		break;
		case'C':
			printf("\nGOOD JOB");
		break;
		case 'D':
			printf("\nYOU PASSED");
		break;
		case'F':
			printf("\nYOU FAILED");
		break;
		default:
			printf("\ninvalid choice");
	}

	/////////////////////////////////////////////////////////////////////
	//Q.3
	{
		if(grade== 'A'|| grade=='B' || grade=='C' || grade=='D')
			{
				 printf("\ncongratulations!! you are eligible for the next level");
			}
		else if(grade=='F')
			{
				printf("\nplease try again next time");
			}
		else
			{
				printf("\ninvalid choice");
			}
	}
	getch();
}