#include<stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    double sum = 0.0;
    int fact = 1;
    float pow = x;
    int term = 1;

    for(int i=1; i<=4; i++)
    {
        if(i%2 == 0)
        {
            sum = sum - (pow/fact);
        }
        else{
            sum = sum + (pow/fact);
        }

        pow = pow * x * x;
        fact = fact * (term + 1) * (term +2);
        term = term + 2;
    }

    printf("%lf", sum);

    return 0;
}
