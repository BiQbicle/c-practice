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
    long working_hrs = get_number_from_stdin("Enter How Many Hours: ",
                                             "Please Input A Valid Number: ");
    long salary_amount_per_hour = get_number_from_stdin(
        "Enter How Much Money Per Hour:  ", "Please Input A Valid Number: ");
    long salary = (working_hrs * salary_amount_per_hour);
    printf("%ld", salary);

    return 0;
}