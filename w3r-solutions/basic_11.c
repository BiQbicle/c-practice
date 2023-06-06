#include <stdio.h>

short get_number_from_stdin() {
    short limit;
    printf("Enter A Number: ");
    scanf("%hu", &limit);
    while (limit < 1 || limit > 1000000) {
        printf("Invalid Number Please Enter A Valid Number [1-1000000]: ");
        scanf("%hu", &limit);
    }
    return limit;
}

int main(void) {
    short weight_item1 = get_number_from_stdin();
    short qt_item1 = get_number_from_stdin();
    short weight_item2 = get_number_from_stdin();
    short qt_item2 = get_number_from_stdin();
    int average_value =
        ((weight_item1 * qt_item1) + (weight_item2 * qt_item2)) /
        (qt_item1 + qt_item2);
    printf("Average Value = %d", average_value);

    return 0;
}