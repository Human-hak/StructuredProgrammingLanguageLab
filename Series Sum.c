#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int sum = 0;
    int term = 0;

    for(int i=1; term<num ; i+=3)
    {
        sum += i;
        term++;
    }

    printf("Summation : %d", sum);
    return 0;
}
