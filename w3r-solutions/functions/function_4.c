#include <stdio.h>

int checkOddEven(int odd) { return (odd & 1); }

int main() {
    int odd;
    printf("Input any number : ");
    scanf("%d", &odd);

    if (checkOddEven(odd)) {
        printf("The entered number is odd.\n\n");
    } else {
        printf("The entered number is even.\n\n");
    }
    return 0;
}