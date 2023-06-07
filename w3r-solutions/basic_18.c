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
    int number_of_days = get_number_from_stdin("Enter the number of days: ",
                                               "Please Input A Valid Number: ");
    int year;
    int month;
    int day;

    year = (int)number_of_days / 365;

    number_of_days = number_of_days - (365 * year);

    month = (int)number_of_days / 30;

    day = (int)number_of_days - (month * 30);

    printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", year, month, day);

    return 0;
}