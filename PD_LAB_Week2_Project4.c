#include <stdio.h>

int func(int, int);

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    int result = func(a, b);
    printf("Result is: %d", result);
    return 0;
}

int func(int a, int b)
{
    if (a == b) 
	{
        return a;
    } 
	else if (a < b) 
	{
        if (a != 0 && b % a != 0) 
		{
            return func(a - 1, b);
        } 
		else 
		{
            return a;
        }
    } 
	else 
	{
        if (b != 0 && a % b != 0) 
		{
            return func(a, b - 1);
        } 
		else 
		{
            return b;
        }
    }
}

