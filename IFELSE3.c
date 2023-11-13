#include<stdio.h>

int main()
{
    int sakibRun, tamimRun, mehediRun;
    scanf("%d %d %d",&sakibRun, &tamimRun, &mehediRun);
    if(sakibRun>tamimRun)
    {
        if(sakibRun>mehediRun)
        {
            printf("Sakib is First");
            if(mehediRun>tamimRun)
            {
                printf("Mehedi is Second");
                printf("Tamim is Third");
            }
            else{
                printf("Tamim is Second");
                printf("Mehedi is Third");
            }
        }
        else{
            printf("Mehedi is First");

            if(sakibRun>tamimRun)
            {
                printf("Sakib is Second");
                printf("Tamim is Third");
            }
            else{
                printf("Tamim is Second");
                printf("Sakib is Third");
            }
        }
    }
    else{
        if(tamimRun>mehediRun)]
        {
            printf("Tamim is First");

        }
    }
    return 0;
}
