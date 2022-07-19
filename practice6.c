#include <stdio.h>

int main() {

    int number;
    int i;

    printf("Please input a number :");
    scanf("%d",&number);

    for (i=1;i<=number;i++) {
        if(i%2 == 0) {
            printf("%d\n",i);
        }
    }

return 0;

}
