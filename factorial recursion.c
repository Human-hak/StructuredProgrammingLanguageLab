#include<stdio.h>

int factorial(int n)
{
    if(n<=1)
    {
        return 1;//Base case
    }
    else{//Recursive case
        return factorial(n-1) * n;
    }
}

float power(float x, int n)
{
    if(n==0)
    {
        return 1.0;//Base case
    }
    else{//Recursive case
        return x * power(x, n-1);
    }
}

int main()
{
    int result = 1;
    result = factorial(5);
    printf("Factorial: %d\n", result);
    float p = power(3.4, 2);
    printf("Power : %f\n", p);
    return 0;
}
