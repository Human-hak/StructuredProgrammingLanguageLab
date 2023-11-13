#include<stdio.h>

struct Cricketer{
    char name[40];

    struct Performance
    {
        int score;
        float st_rate;
    }perf;
};

int main()
{
    struct Cricketer player1;
    gets(player1.name);
    player1.perf.score = 34;
    player1.perf.st_rate = 23.45;

    printf("Name          : %s\n", player1.name);
    printf("Score         : %d\n", player1.perf.score);
    printf("Striking Rate : %f\n", player1.perf.st_rate);

    return 0;
}
