#include <stdio.h>

int get_positive_integer(const char *defaultProompt, const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 12) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int month = get_positive_integer("enter the number of a month: ",
                                     "enter a valid month: ");
    if (month == 1) {
        printf("31\n");
    } else if (month == 2) {
        printf("28\n");
    } else if (month == 3) {
        printf("31\n");
    } else if (month == 4) {
        printf("30\n");
    } else if (month == 5) {
        printf("31\n");
    } else if (month == 6) {
        printf("30\n");
    } else if (month == 7) {
        printf("31\n");
    } else if (month == 8) {
        printf("31\n");
    } else if (month == 9) {
        printf("30\n");
    } else if (month == 10) {
        printf("31\n");
    } else if (month == 11) {
        printf("30\n");
    } else if (month == 12) {
        printf("31\n");
    }
}