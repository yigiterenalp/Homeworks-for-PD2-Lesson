#include <stdio.h>
#define N 5

int func(int a[], int n);

int main()
{
    int a[N], i, j;
    printf("Enter your array numbers: \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    int biggest = func(a, N);
    printf("Biggest array number is %d\n", biggest);
    return 0;
}

int func(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    int x = func(a, n - 1);
    if (a[n - 1] > x)
    {
        return a[n - 1];
    }
    else
    {
        return x;
    }
}

