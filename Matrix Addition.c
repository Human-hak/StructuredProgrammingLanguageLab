#include<stdio.h>

int main()
{
    //Input
    int matrixA[3][4] =
    {
        {3,2,1,4},
        {4,1,1,0},
        {2,1,9,1}
    };

    int matrixB[3][4] =
    {
        {1,2,1,0},
        {2,2,1,1},
        {3,4,1,1}
    };

    //Processing
    int sumMatrix[3][4];

    for(int i=0;i<3;i++)        //Row
    {
        for(int j=0;j<4;j++)    //Column
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    //Output
    for(int i=0;i<3;i++)        //Row
    {
        for(int j=0;j<4;j++)    //Column
        {
            printf("%2d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
