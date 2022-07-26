#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Please enter the first integer : ");
    scanf("%d",&a);

    printf("Please enter the second integer : ");
    scanf("%d",&b);

    if (a == b) {
        int answer_one = (a + b) * 3;
        printf("The answer is %d",answer_one);
    }
    else {
        int answer_two = a + b;
        printf("The answer is %d",answer_two);
    }

    return 0;

}
