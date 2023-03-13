#include <stdio.h>

int func(int);

int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d", &x);
    int result = func(x);
    printf("Sum all digits: %d\n", result);
    return 0;
}

int func(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return (x % 10) + func(x / 10);
    }
}

