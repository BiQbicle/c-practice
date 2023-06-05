#include <stdio.h>
#include <stdlib.h>

int main() {

    int value1;
    int value2;
    char op;
    printf("Type Your First Number: ");
    scanf("%d", &value1);
    printf("Type Your Second number: ");
    scanf("%d", &value2);
    printf("What Operation Do You want to use: ");
    scanf(" %c", &op);
    if (op == '+') {
        printf("%d", value1 + value2);
    } else if (op == '-') {
        printf("%d", value1 - value2);
    } else if (op == '/') {
        printf("%d", value1 / value2);
    } else if (op == '*') {
        printf("%d", value1 * value2);
    } else {
        printf("This Is not a valid operator");
    }

    return 0;
}