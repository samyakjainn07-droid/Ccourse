#include <stdio.h>
int main(){
    struct Point {
        int x;
        int y;
    } ;
    struct Point a = {1, 2};
    struct Point *b = &a;

    printf("Point a: (%d, %d)\n", a.x, a.y);
    printf("Point b: (%d, %d)\n", b->x, b->y);
    return 0;

}