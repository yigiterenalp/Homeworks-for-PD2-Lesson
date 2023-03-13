#include <stdio.h>

int func(int);

int main()
{
	int number;
	printf("Enter limit number: ");
	scanf("%d",&number);
	int result=func(number);
	printf("\nResult:  %d\n",result);
}

int func(int x)
{
	int sum=0;
	if(x<0)
	{
		return sum;
	}
	else
	{
		sum=x+func(x-1);
	}
}

