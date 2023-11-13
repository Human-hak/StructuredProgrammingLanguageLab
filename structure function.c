#include<stdio.h>
#include<math.h>

struct Point{
    float x,y;
};

float distance(struct Point p1, struct Point p2)
{
    float d;
    d = sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y,2));
    return d;
}

void Print(struct Point A)
{
    printf("(%f, %f)\n", A.x, A.y);
}

struct Point Midpoint(struct Point p1, struct Point p2)
{
    struct Point m;
    m.x = (p1.x+p2.x)/2;
    m.y = (p1.y+p2.y)/2;

    return m;
}


int main()
{
    struct Point A = {3.4, 2.1};
    struct Point B = {2.1, 3.4};

    float dist = distance(A, B);
    printf("Distance: %f\n", dist);

    struct Point mid = Midpoint(A,B);
    Print(mid);
    return 0;
}
