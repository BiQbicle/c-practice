#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 100000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int integer_to_convert =
        get_number_from_stdin("Please Input An Integer To Convert: ",
                              "Please Input A Valid Number: ");
    int hour = (integer_to_convert / 3600);
    int min = (integer_to_convert - (3600 * hour)) / 60;
    int sec = integer_to_convert % 60;

    printf("Hours: ");
    printf("%d\n", hour);
    printf("Minutes: ");
    printf("%d\n", min);
    printf("Seconds: ");
    printf("%d\n", sec);

    return 0;
}