#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float buyprice[n],sellprice[n];

    for(i=0;i<n;i++)
    {
        scanf("%f", &buyprice[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%f", &sellprice[i]);
    }

    float profit = 0;

    for(i=0;i<n;i++)
    {
        profit = profit + (sellprice[i]-buyprice[i]);
    }

    printf("Total Profit : %f", profit);
    return 0;
}
