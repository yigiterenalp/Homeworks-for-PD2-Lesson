#include <stdio.h>

int main() 
{
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int sum = 0;
    int i;
	for (i = 0; i < size; i++) 
	{
        sum += *ptr;
        ptr++;
    }
	printf("The sum of all elements in the array is: %d", sum);
	return 0;
}

