#include<stdio.h>

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n== 1)
    {
        return 1;
    }
    else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}

int main()
{
    int fib = fibonacci(3);
    printf("Fibonacci fib%d = %d",3, fib);
    return 0;
}
