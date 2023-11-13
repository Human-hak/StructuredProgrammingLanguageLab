#include<stdio.h>

int main()
{
    //Input
    int m,n,p,i,j,k;
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(i=0;i<m;i++)        //Row
    {
        for(j=0;j<n;j++)    //Column
        {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d",&n,&p);
    int B[n][p];
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    //Processing
    int AB[m][p];
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            AB[i][j] = 0;
            for(k=0;k<n;k++)
            {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    //Output
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%3d ",AB[i][j]);
        }
        printf("\n");
    }
    return 0;
}
