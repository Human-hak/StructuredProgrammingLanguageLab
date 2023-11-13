#include<stdio.h>

int stringLength(char *str)
{
    int length = 0;

    while(*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[] = "Hello World";
    int len = stringLength(str);
    printf("Length : %d", len);
    return 0;
}
