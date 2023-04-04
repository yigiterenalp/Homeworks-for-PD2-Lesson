#include <stdio.h>

int strLength(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of the string is: %d", strLength(str));
    return 0;
}

int strLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

