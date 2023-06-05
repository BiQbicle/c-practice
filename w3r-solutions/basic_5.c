#include <stdio.h>

int main() {
    int value1;
    int value2;

    printf("Type Your First Number: \n");
    scanf("%d", &value1);
    printf("Type Your Second number: \n");
    scanf("%d", &value2);
    printf("Area: ");
    printf("%d\n", value1 * value2);
    printf("Perimeter: ");
    printf("%d\n", value1 + value2 + value1 + value2);

    return 0;
}