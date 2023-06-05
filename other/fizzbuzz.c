#include <stdio.h>
#include <stdlib.h>

unsigned short get_numbers() {
    unsigned short limit;
    printf("Now Many Numbers? ");
    scanf("%hu", &limit);
    while (limit < 0 || limit > 2000) {
        printf("Please enter a valid number in the limit of 0 to 2000? ");
        scanf("%hu", &limit);
    }
    return limit;
}

int main() {
    unsigned short user_input = get_numbers();

    for (int g = 1; g <= user_input; g++) {
        int is_divisible_by_3 = g % 3 == 0;
        int is_divisible_by_5 = g % 5 == 0;

        if (is_divisible_by_3 && is_divisible_by_5) {
            printf("FizzBuzz\n");
        } else if (is_divisible_by_3) {
            printf("Fizz\n");
        } else if (is_divisible_by_5) {
            printf("Buzz\n");
        } else {
            printf("%d\n", g);
        }
    }

    return 0;
}