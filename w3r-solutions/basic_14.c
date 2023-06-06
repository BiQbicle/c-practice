#include <stdio.h>

double get_number_from_stdin(const char *defaultProompt,
                             const char *errorProompt) {
    double limit;
    printf("%s", defaultProompt);
    scanf("%lf", &limit);
    while (limit < 1 || limit > 100000) {
        printf("%s", errorProompt);
        scanf("%lf", &limit);
    }
    return limit;
}

int main() {
    int total_distance = get_number_from_stdin(
        "Please Input The Total Distance: ", "Please Input A Valid Number");
    int feul_spent = get_number_from_stdin(
        "Please Input Amount Of Feul In KG: ", "Please Input A Valid Number");
    double average_consumption = (total_distance / feul_spent);
    printf("%lf", average_consumption);

    return 0;
}