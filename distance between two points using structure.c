//program to enter two points to calculate distance between them
#include<stdio.h>
#include<math.h>
void main()
{
    typedef struct point
    {
        int x, y;
    }POINT;
    POINT p1, p2;
    float distance;
    printf("\n Enter the coordinates of the first point: ");
    scanf("%d %d", &p1.x , &p1.y);
    printf("\n Enter the coordinates of the second point: ");
    scanf("%d %d", &p2.x, &p2.y);
    distance = sqrt( pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
    printf("\n the coordinates of the first point are: %dx %dy" , p1.x , p1.y);
    printf("\n the coordinates of the second points are: %dx %dy", p2.x, p2.y);
    printf("\n Distance between p1 and p2 = %f", distance);
}
