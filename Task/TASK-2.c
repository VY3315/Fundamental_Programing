// Take detais from users and show the user information
// dynamically

#include<stdio.h>
#include<conio.h>

int main()

{
	char name[20],email[20],gender[20],address[50];
	int number,age,pincode;
	
	printf("-----------------------------------------------------Enter Details------------------------------------------------------\n");
	
	printf("your name:");
	gets(name);
	
	printf("\nyour E-mail:");
	scanf("%s",&email);
	
	printf("\nEnter Gender:");
	scanf("%s",&gender);
	
	printf("\nEnter Number:");
	scanf("%d",&number);
	
	printf("\nEnter Age:");
	scanf("%d",&age);
	
	printf("\nEnter Address:");
	scanf("%s",&address);
	
	printf("\nEnter pincode:");
	scanf("%d",&pincode);
	
	printf("---------------------------------------------------Your Information-----------------------------------------------------\n");

	printf("\nName:%s",name);
	printf("\n\nE-MAIL:%s",email);
	printf("\n\nGnder:%s",gender);
	printf("\n\nNumber:%d",number);
	printf("\n\nYour Age:%d",age);
	printf("\n\nAddress:%s",address);
	printf("\n\nPincode:%d",pincode);
	getch();
	
}
	

