
#include <math.h>
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
    double x1 = get_number_from_stdin("Input The X1 Number: ",
                                      "Please Input A Valid Number");
    double x2 = get_number_from_stdin("Input The X2 Number: ",
                                      "Please Input A Valid Number");
    double y1 = get_number_from_stdin("Input The Y1 Number: ",
                                      "Please Input A Valid Number");
    double y2 = get_number_from_stdin("Input The Y2 Number: ",
                                      "Please Input A Valid Number");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%lf", distance);
    return 0;
}