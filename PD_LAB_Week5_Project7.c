#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    int len = strlen(str);
	char *ptr = str + len - 1;
	printf("The reversed string is: ");
	while (ptr >= str) 
	{
        printf("%c", *ptr);
        ptr--;
    }
	return 0;
}

