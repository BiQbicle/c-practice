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
    int p = get_number_from_stdin("Add your first number (must be even): ",
                                  "Please Input A Valid Number: ");
    int q = get_number_from_stdin("Add your second number (must be positive): ",
                                  "Please Input A Valid Number: ");
    int r = get_number_from_stdin("Add your third number (must be positive): ",
                                  "Please Input A Valid Number: ");
    int s = get_number_from_stdin("Add your fourth number (must be positive): ",
                                  "Please Input A Valid Number: ");
    if ((q > r) && (s > p) && (r + s > p + q) && (p % 2 == 0)) {
        printf("Correct Values");
    } else {
        printf("Wrong Values");
    }
    return 0;
}