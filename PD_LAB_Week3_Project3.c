#include <stdio.h>


int func(int n)
{
	if(n==4)
	{
		return n;
	}
	else
	{
		return 2*func(n+1);
	}
}

int main()
{
	printf("%d ",func(2));
	return 0;
}
