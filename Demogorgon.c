#include<stdio.h>


int DemogorgonNumber(int a)
//: if DEMOGORGON returns 1 else returns -1
{
    int check1, check2;

    check1 = checkerFunc1(a);
    check2 = checkerFunc2(a);

    if(check1 == 1 && check2 ==1)
    {
        return 1;
    }
    else{
        return -1;
    }
}
int checkerFunc1(int a)
//: if CONDITION No. 1 is true returns 1 else returns -1
{
    int sumOfOdd=0, sumOfEven=0, digit;
    for(digit=a%10; a!=0; a=a/10)
    {
        if(digit%2==0)
        {
            sumOfEven += digit;
        }
        else{
            sumOfOdd += digit;
        }
        digit = a%10;
    }

    if(sumOfOdd<sumOfEven)
    {
        return 1;
    }
    else{
        return -1;
    }
}
int checkerFunc2(int a)
//: if CONDITION No. 2 is true returns 1 else returns -1
{
    int isPrime, isDefective;
    isPrime = primeChecker(a);
    isDefective = defectiveChecker(a);

    if(isPrime==1 && isDefective==1)
    {
        return 1;
    }
    else{
        return -1;
    }
}
int primeChecker(int a)
//: if PRIME returns 1 else returns -1
{
    int i;
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            return -1;
        }
    }

    return 1;
}
int defectiveChecker(int a)
//: if DEFECTIVE returns 1 else returns -1
{
    int digit, fact=1, sum = 0;

    for(digit=a%10; a != 0; a=a/10)
    {
        fact = factorial(digit);
        sum = sum + fact;

        digit=a%10;
    }

    if(sum == a)
    {
        return -1;
    }
    else{
        return 1;
    }
}
int factorial(int a)
//: return Factorial value of a
{
    int i, fact = 1;
    for(i=1;i<=a;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int rangeMin, rangeMax, i, flag;

    scanf("%d %d", &rangeMin, &rangeMax);
    for(i=rangeMin; i<=rangeMax; i++)
    {
        flag = DemogorgonNumber(i);
        if(flag==1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
