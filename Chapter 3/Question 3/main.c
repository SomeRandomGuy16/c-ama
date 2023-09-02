#include <stdio.h>

int main(void) {
    int gs1, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN:\t");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_number, &check_digit);

    printf("GS1 prefix:\t\t%d\nGroup identifier:\t%d\nPublisher code:\t\t%d\nItem number:\t\t%d\nCheck digit:\t\t%d\n", gs1, group_identifier, publisher_code, item_number, check_digit);
    return 0;
}