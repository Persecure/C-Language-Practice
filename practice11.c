#include <stdio.h>

int main() {

    int x = 10;
    int *p = &x;
    int y;
    int *p2 = &y;

    printf("X contains : %d\n",x);
    printf("Pointer X contains : %d\n",*p);

    printf("The address of X : %p\n",&x);
    printf("The address of pointer : %p\n",*p);

    *p = 17;
    printf("X contains : %d\n",x);

    printf("The address of X : %p\n",&x);
    printf("The address of X : %p\n",*p);

    y = x * 2;
    printf("The address of Y : %p\n",&y);
    printf("Y contains : %d\n",y);
    printf("Y contains : %d\n",*p2);

    return 0;
}
