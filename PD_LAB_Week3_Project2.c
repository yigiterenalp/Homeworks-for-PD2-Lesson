#include <stdio.h>

int count_odd_numbers(int *arr, int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = count_odd_numbers(arr, n);
    printf("There are %d odd numbers in the array.\n", count);
    return 0;
}

int count_odd_numbers(int *arr, int n) {
    if (n == 0) {
        return 0;
    } else {
        int count = count_odd_numbers(arr + 1, n - 1);
        if (*arr % 2 == 1) {
            return count + 1;
        } else {
            return count;
        }
    }
}

