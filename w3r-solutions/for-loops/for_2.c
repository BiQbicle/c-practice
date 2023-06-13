#include <stdio.h>

int main() {
    int sum = 0;

    for (int g = 0; g < 10; g++) {
        sum = sum + g;
        printf("%d\n", g);
    }
    printf("\n The sum is: %d\n", sum);

    return 0;
}