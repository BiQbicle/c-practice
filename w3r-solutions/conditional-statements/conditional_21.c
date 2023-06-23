#include <stdio.h>

int get_positive_integer(const char *defaultProompt, const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 7) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int day = get_positive_integer("enter the number of a day: ",
                                   "enter a valid day number: ");
    if (day == 1) {
        printf("Monday\n");
    } else if (day == 2) {
        printf("Tuesday\n");
    } else if (day == 3) {
        printf("Wednesday\n");
    } else if (day == 4) {
        printf("Thursday\n");
    } else if (day == 5) {
        printf("Friday\n");
    } else if (day == 6) {
        printf("Saturday\n");
    } else if (day == 7) {
        printf("Sunday\n");
    }

    return 0;
}