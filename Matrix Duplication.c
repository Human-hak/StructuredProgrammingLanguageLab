#include<stdio.h>

int main()
{
    //Input
    int m,n,i,j,k,l;

    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Processing
    for(i=0;i<m;i++) //row
    {
        for(j=0;j<n;j++) //column
        {
            for(k=0;k<m;k++) //row
            {
                for(l=0;l<n;l++) //column
                {
                    if(matrix[i][j] == matrix[k][l] && (k>i || l>j))
                    {
                        matrix[k][l] = -1;
                    }
                }
            }
        }
    }

    //Output
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
