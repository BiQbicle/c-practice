
#include <math.h>
#include <stdio.h>

double get_number_from_stdin(const char *defaultProompt,
                             const char *errorProompt) {
    double end;
    printf("%s", defaultProompt);
    scanf("%lf", &end);
    while (end < 1 || end > 100000) {
        printf("%s", errorProompt);
        scanf("%lf", &end);
    }
    return end;
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