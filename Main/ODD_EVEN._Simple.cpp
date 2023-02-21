 #include<stdio.h>
 #include<conio.h>
 
 int main()
 {
 	int num;
 	printf("Enter two numbers:");
 	scanf("%d",&num);
 	
 	if(num%2==0)
 	{
 		printf("EVEN NUMBER",num);
	}
	
	else
	{
		printf("ODD NUMBER",num);
	}
 }