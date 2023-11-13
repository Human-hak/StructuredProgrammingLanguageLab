#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    int price[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &price[i]);
    }

    int buyId, sellId;
    int profit;
    int maxprofit=0;

    for(i=0;i<=(n-2);i++)
    {
        for(j=i+1; j<=(n-1); j++)
        {
            profit = price[j]-price[i];

            if(profit>maxprofit)
            {
                buyId = i;
                sellId = j;
                maxprofit = profit;
            }
        }
    }

    printf("Buy day: %d, Sell day: %d, Maximum Profit: %d", buyId, sellId, maxprofit);

    return 0;
}

