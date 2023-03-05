#include <stdio.h>

int kitleIndex(int a,double b);

int main()
{
	int weight,index;
	double height;
	printf("Enter your weight(kg):  ");
	scanf("%d",&weight);
	printf("\nEnter your height(m):  ");
	scanf("%lf",&height);
	index=kitleIndex(weight,height);
	if(index==1)
	{
		printf("\nYour status zayif.");
	}
	else if(index==2)
	{
		printf("\nYour status normal.");
	}
	else if(index==3)
	{
		printf("\nYour status kilolu.");
	}
	else if(index==4)
	{
		printf("\nYour status obez.");
	}
	else if(index==0)
	{
		printf("\nTry again!.");
	}
}

int kitleIndex(int a,double b)
{
	double index=a/(b*b);
	if(index>=0 && index<=18)
	{
		return 1;
	}
	else if(index>=19 && index<=25)
	{
		return 2;
	}
	else if(index>=26 && index<=30)
	{
		return 3;
	}
	else if(index>30)
	{
		return 4;
	}
	else
	{
		return 0;
	}
}
