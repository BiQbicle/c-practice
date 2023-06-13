#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    short first_integer = get_number_from_stdin(
        "enter your first integer: ", "please enter a valid number: ");
    short second_integer = get_number_from_stdin(
        "enter your second integer: ", "please enter a valid number: ");
    short third_integer = get_number_from_stdin(
        "enter your third integer: ", "please enter a valid number: ");

    if (first_integer > second_integer && first_integer > third_integer) {
        printf("the first number is the greatest among the three\n");
    } else if (second_integer > first_integer &&
               second_integer > third_integer) {
        printf("the second number is the greatest among the three\n");
    } else if (third_integer > first_integer &&
               third_integer > second_integer) {
        printf("the third number is the greatest among the three\n");
    } else {
        printf("the numbers are equal\n");
    }

    return 0;
}