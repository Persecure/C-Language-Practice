#include <stdio.h>

int a;
int b;
int c;

int main() {
    printf("Enter a value of a : ");
    scanf("%d", &a);

    printf("Enter a value of b : ");
    scanf("%d", &b);

    printf("Enter a value of c : ");
    scanf("%d", &c);

    if (a > b & c) {
        printf("A is the biggest number.");
    }
    else if (b > a & c) {
        printf("B is the biggest number.");
    }
    else {
        printf("C is the biggest number.");
    }
return 0;
}
