#include<stdio.h>

//Small 1/Capital 0

int isSmall(char *c)
{
    char letter = *c;
    if(letter>='a' && letter<='z')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char mychar = 't';
    int result = isSmall(&mychar);
    if(result == 1)
    {
        printf("Small Letter\n");
    }
    else{
        printf("Capital Letter\n");
    }
    return 0;
}
