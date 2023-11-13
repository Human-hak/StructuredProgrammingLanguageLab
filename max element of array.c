#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d, ", array[i]);
    }

    //Assumtion/Initializatrion
    int max = array[0];
    int maxId = 0;

    for(i=1;i<n;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            maxId = i;
        }
    }

    printf("Maximum Value : %d at Index : %d",max, maxId);

    return 0;
}
