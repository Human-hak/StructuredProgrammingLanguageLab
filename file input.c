#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("myfile.txt", "r+");
    if(fp == NULL)
    {
        printf("File Error\n");
    }
    else{
        printf("File Exists\n");
        int x;
        fscanf(fp, "%d", &x);
        printf("%d\n", x);
        fgetc(fp);
        char name[40];
        fgets(name, 40, fp);
        printf("%s\n", name);
    }
    return 0;
}
