#include <stdio.h>

long get_number_from_stdin(const char *defaultProompt,
                           const char *errorProompt) {
    long limit;
    printf("%s", defaultProompt);
    scanf("%ld", &limit);
    while (limit < 1 || limit > 100000) {
        printf("%s", errorProompt);
        scanf("%ld", &limit);
    }
    return limit;
}

int main() {
    int first_integer = get_number_from_stdin(
        "Please Input Your First number: ", "Please Input A Valid Number");
    int second_integer = get_number_from_stdin(
        "Please Input Your Second number: ", "Please Input A Valid Number");
    int third_integer = get_number_from_stdin(
        "Please Input Your Third number: ", "Please Input A Valid Number");
    int maximum_value = 0;

    if (first_integer > second_integer && first_integer > third_integer) {
        printf("The Bigger Value Is: %d\n", first_integer);
    } else if (second_integer > first_integer &&
               second_integer > third_integer) {
        printf("The Bigger Value Is: %d\n", second_integer);
    } else if (third_integer > first_integer &&
               third_integer > second_integer) {
        printf("The Bigger Value Is: %d\n", third_integer);
    } else {
        printf("The Values Are Equal");
    }

    return 0;
}