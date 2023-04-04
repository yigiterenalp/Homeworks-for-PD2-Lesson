#include <stdio.h>

void swap(int *num1, int *num2, int *num3);

int main() {
    int num1 = 5, num2 = 6, num3 = 7;
    printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n\n", num1, num2, num3);
    swap(&num1, &num2, &num3);
    printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    return 0;
}

void swap(int *num1, int *num2, int *num3) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;
}

