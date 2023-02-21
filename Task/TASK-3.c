#include<stdio.h>
#include<conio.h>

int main()
{
	float sub1,sub2,sub3,sub4,total,out,per,avg;
	
	printf("Score Out of:");
	scanf("%f",&out);
	printf("Enter Subject-1 Marks:");
	scanf("%f",&sub1);
	printf("Enter Subject-2 Marks:");
	scanf("%f",&sub2);
	printf("Enter Subject-3 Marks:");
	scanf("%f",&sub3);
	printf("Enter Subject-4 Marks:");
	scanf("%f",&sub4);
	
	total=sub1+sub2+sub3+sub4;
	avg=total/4;
	per=(total/out) * 100;
	
	printf("Total of All Subjects:%.2f%%",total);
	printf("\nAverage Marks:%.2f%%",avg);
	printf("\nPercentage:%.2f%%",per);
	
	if(per==100)
	{
		printf("\nGrade:AA");
	}
	else if(per>=80 && per<100)
	{
		printf("\nGrade:AB");
	}
	else if(per>=50 && per<=80)
	{
		printf("\nGrade:BB");
	}
	else if(per>=40 && per<=50)
	{
		printf("\nGrade:BC");
	}
	else if(per>=35 && per<=40)
	{
		printf("\nGrade:CC");
	
	}
	else if(per>=30 && per<=35)
	{
		printf("\nGrade:CD");
	}
	else if(per>=25 && per<=30)
	{
		printf("\nGrade:DD");
	}
	else
	{
		printf("\nYou Are Fail\nBetter Luck For Next Time");
	}
	return 0;
	
}