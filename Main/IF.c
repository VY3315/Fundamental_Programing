// Conditional program using IF loop
// Dynamically

#include<stdio.h>
#include<conio.h>

int main()
{
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible");
	}
	
	else
	{
		printf("Not Eligible");
	}
}