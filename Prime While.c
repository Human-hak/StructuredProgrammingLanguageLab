#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int isPrime = 1; //0 = False, 1 = True

    int i=2;
    while(i*i<=num) //i<num -- Its right
    {
        if(num%i == 0)
        {
            isPrime = 0;
            break;
        }

        i++
    }

    if(isPrime == 1)
    {
        printf("PRIME NUMBER");
    }
    else{
        printf("NONPRIME NUMBER");
    }
    return 0;
}

