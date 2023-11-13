#include<stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if((number>0 && number>50) || (number%2==0 && number<20))
    {
        printf("Good Number");
    }
    else{
        printf("Not Good Number");
    }
    return 0;
}
