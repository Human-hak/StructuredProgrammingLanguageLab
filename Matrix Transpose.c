#include<stdio.h>

int main()
{
    //Input
    int m,n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for(int i=0;i<m;i++)        //Row
    {
        for(int j=0;j<n;j++)    //Column
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Processing

    int transM[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transM[i][j] = matrix[j][i];
        }
    }

    //Output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", transM[i][j]);
        }
        printf("\n");
    }
    return 0;
}
