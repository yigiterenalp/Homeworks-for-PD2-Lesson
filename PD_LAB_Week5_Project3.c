#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], *ptr;
    int n, i;
	printf("Enter the number of elements to store in the array: ");
    scanf("%d", &n);
	printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	ptr = arr;
	printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) 
	{
    	printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}

