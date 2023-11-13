#include<stdio.h>

int main()
{
    char mychar;
    scanf("%c",&mychar);

    if(mychar>='a' && mychar<='z')
    {
        printf("Small Letter");
    }
    else if(mychar>='A' && mychar<='Z')
    {
        printf("Capital Letter");
    }
    else if(mychar>='0' && mychar<='9')
    {
        printf("Number");
    }
    else
    {
        printf("Special");
    }
    return 0;
}
