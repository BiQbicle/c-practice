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
    int integer_1 = get_number_from_stdin("Please input an integer: ",
                                          "Please Input A Valid Number: ");
    int integer_2 = get_number_from_stdin("Please input another integer: ",
                                          "Please Input A Valid Number: ");
    if (integer_1 == integer_2) {
        printf("%d and %d ", integer_1, integer_2);
        printf("Are equal\n");
    } else {
        printf("%d and %d ", integer_1, integer_2);
        printf("Are not equal\n");
    }
    return 0;
}