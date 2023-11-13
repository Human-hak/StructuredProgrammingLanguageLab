#include<stdio.h>

struct Cricketer{
    char name[40];
    int score;
    int age;
};

struct Cricketer players[2];

int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        gets(players[i].name);
        //printf("d\t%s\td\n", players[i].name);
        scanf("%d", &players[i].score);
        //printf("d\t%d\td\n", players[i].score);
        scanf("%d", &players[i].age);
        getchar();
        //printf("d\t%d\td\n", players[i].age);
    }

    for(i=0;i<2;i++)
    {
        printf("%s\n", players[i].name);
        printf("%d\n", players[i].score);
        printf("%d\n", players[i].age);
    }
    return 0;
}
