#include <stdio.h>

int main() {
    int num1 = 5, num2 = 6;
    int *ptr1, *ptr2, sum;
	ptr1 = &num1;
    ptr2 = &num2;
	sum = *ptr1 + *ptr2;
	printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
	return 0;
}

