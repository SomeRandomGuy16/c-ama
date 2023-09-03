//Calculates a broker's commission

#include <stdio.h>

int main(void) {
    int no_of_shares;
    float commission, rival_commission, value, value_of_shares;

    printf("Enter the number of shares:\t");
    scanf("%d", &no_of_shares);
    printf("Enter the value of each share:\t");
    scanf("%f", &value_of_shares);

    value = no_of_shares * value_of_shares;

    if (value < 250.00f) {
        commission = 30.00f + 0.017f * value;
        rival_commission = 25.00f + 0.04f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
        rival_commission = 54.00f + 0.0088f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
        rival_commission = 73.00f + 0.044f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + 0.0022f * value;
        rival_commission = 95.00f + 0.0044f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + 0.0011f * value;
        rival_commission = 150.00f + 0.0022f * value;
    } else {
        commission = 255.00f + 0.0009f * value;
        rival_commission = 250.00f + 0.018f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    if (rival_commission < 37.00f) {
        rival_commission = 37.00f;
    }
    
    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rival_commission);

    return 0;
}