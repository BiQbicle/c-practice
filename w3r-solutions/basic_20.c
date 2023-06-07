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
    double a =
        get_number_from_stdin("Input a: ", "Please Input A Valid Number: ");
    double b =
        get_number_from_stdin("Input b: ", "Please Input A Valid Number: ");
    double c =
        get_number_from_stdin("Input c: ", "Please Input A Valid Number: ");
    double square_root = sqrt(b * b - (4 * a * c));

    double root1st = (-b + square_root) / (2 * a);
    double root2nd = (-b - square_root) / (2 * a);

    printf("Root1: ");
    printf("%lf\n", root1);
    printf("Root2: ");
    printf("%lf\n", root2);

    return 0;
}