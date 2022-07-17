#include <stdio.h>

int main() {

    float principal;
    float time;
    float rate;
    float SI;

    printf("Enter the principal amount : ");
    scanf("%f",&principal);

    printf("Enter the duration in years : ");
    scanf("%f",&time);

    printf("Enter the interest rate in percentage : ");
    scanf("%f",&rate);

    rate = rate / 100;
    SI = (principal*time*rate) / 100;

    printf("The interest amount will be %.2f ",SI);

return 0;
}
