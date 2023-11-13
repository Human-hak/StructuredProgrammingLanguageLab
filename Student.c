#include<stdio.h>
#include<string.h>

//Structure Definition
struct Student{
    char name[40];
    float cgpa;
    int age;
};

//Structure Initialization
struct Student captain = {"Ratul", 3.12, 25};

void showCaptain()
{
    printf("Name: ");
    puts(captain.name);
    printf("CGPA: %f\nAGE: %d", captain.cgpa, captain.age);
}


int main()
{
    //showCaptain();

    char str[40];
    int i;
    struct Student students[3];

    for(i=0;i<3;i++)
    {
        gets(students[i].name);
        scanf("%f", &students[i].cgpa);
        scanf("%d", &students[i].age);
    }

    for(i=0;i<3;i++)
    {
        puts(students[i].name);
        printf("%f", students[i].cgpa);
        printf("%d", students[i].age);
    }

    return 0;
}
