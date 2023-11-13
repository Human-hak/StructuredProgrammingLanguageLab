#include<stdio.h>

int main()
{
    int value = 5;
    int *p;

    p = &value;

    printf("Value : %d\n", value);
    printf("Address: %p, Value: %d\n", p, *p);
    return 0;
}
