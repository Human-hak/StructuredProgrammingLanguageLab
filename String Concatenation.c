#include<stdio.h>
#include<string.h>

int main()
{
    char first[] = "Department of ";
    char second[] = "Computer ";
    char third[] = "Science and ";
    char fourth[]="Engineering";

    strcat(first, second);
    puts(first);

    strcat(first, third);
    puts(first);

    strcat(first, fourth);
    puts(first);
    return 0;
}
