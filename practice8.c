#include <stdio.h>
void main() {

    int i;
    int n;
    int sum = 0;
    float avg;

    printf("Enter the 10 numbers : \n");
    for (i = 1; i <=10;i++) {
        printf("Number %d : ",i);
        scanf("%d",&n);
        sum +=n;
    }
        avg = sum/10;
        printf("The sum is %d\n The average is %f\n",sum,avg);

        return 0;

}
