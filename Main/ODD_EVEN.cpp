// Odd_Even program using turnary operator
// Dynamically

#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	(num%2==0)?printf("Even Number"):printf("Odd Number");
}