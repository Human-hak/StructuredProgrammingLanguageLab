#include<stdio.h>

int main()
{
    char myString[10];

    //scanf("%s", myString);
    gets(myString);

    printf("Your input is :\n");
    puts(myString);

    return 0;
}
