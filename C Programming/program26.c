// Write a program to display the student result class
// 0-35 Fail class
// 35-50 Pass class
// 50-60 Second class
// 60-70 First class
// 70-100 Distinction

#include <stdio.h>

void DisplayClass(float fMarks)
{
	if((fMarks >= 0.0) && (fMarks < 35.0)) 
	{
		printf("You are failed\n");
	}
	else if((fMarks >= 35.0) && (fMarks < 50.0))
	{
		printf("Pass Class\n");
	}
	else if((fMarks >= 50.0) && (fMarks < 60.0))
	{
		printf("Second Class\n");
	}
	else if((fMarks >= 60.0) && (fMarks < 70.0))
	{
		printf("First Class\n");
	}
	else if((fMarks >= 70.0) && (fMarks <= 100.0))
	{
		printf("First Class with Distinction\n");
	}
	else // Here else works as filter
	{
		printf("Marks entered are invalid.\n");
	}
}

int main()
{	
	float fValue = 0.0;
	
	printf("Enter the percentage\n");
	scanf("%f",&fValue);
	
	DisplayClass(fValue);
	
	return 0;
}