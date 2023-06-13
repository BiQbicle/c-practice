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
    long leap_or_not =
        get_number_from_stdin("enter a year: ", "please enter a valid year: ");
    if (leap_or_not % 4 == 0 || leap_or_not % 400 == 0) {
        printf("It is a leap year");
    } else {
        printf("it is not a leap year");
    }

    return 0;
}