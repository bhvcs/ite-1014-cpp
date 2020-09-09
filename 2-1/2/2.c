#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

Point getScale2xPoint(const Point* p){
    Point q1;
    q1.xpos = p->xpos*2;
    q1.ypos = p->ypos*2;
    return q1;
}

void swapPoints(Point* p1, Point* p2){
    Point swap = *p1;
    *p1 = *p2;
    *p2 = swap;
    return;
}

int main(void){
    Point p1;
    scanf("%d %d", &(p1.xpos), &(p1.ypos));
    Point p2 = getScale2xPoint(&p1);
    printf("p1 : %d %d\n", p1.xpos, p1.ypos);
    printf("p2 : %d %d\n", p2.xpos, p2.ypos);
    swapPoints(&p1, &p2);
    printf("p1 : %d %d\n", p1.xpos, p1.ypos);
    printf("p2 : %d %d\n", p2.xpos, p2.ypos);

    return 0;
}
