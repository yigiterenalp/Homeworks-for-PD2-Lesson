#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a,b,x;
	printf("Throw a dice:  ");
	srand(time(NULL));
	a=1+rand()%6;
	printf("%d\n\n",a);
	printf("Throw a dice:  ");
	b=1+rand()%6;
	printf("%d\n\n",b);
	int sum=a+b;
	if(sum==7 || sum==11)
	{
		printf("You won!");
		return 0;
	}
	else if(sum==2 || sum==3 || sum==12)
	{
		printf("You lost!");
		return 0;
	}
	printf("You threw %d.\n\n",sum);
	while(sum!=x)
	{
		printf("Try Again\n\n");
		printf("Throw a dice:  ");
		a=1+rand()%6;
		printf("%d\n\n",a);
		printf("Throw a dice:  ");
		b=1+rand()%6;
		printf("%d\n\n",b);
		x=a+b;
		if(x==7)
		{
			printf("You lost!");
			return 0;
		}
	}
	printf("You won!");
}
