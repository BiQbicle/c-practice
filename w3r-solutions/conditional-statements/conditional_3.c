#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < -1000 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int positive_or_negative =
        get_number_from_stdin("please enter a negative or positive integer: ",
                              "please enter a valid number: ");
    if (positive_or_negative >= 0) {
        printf("%d ", positive_or_negative);
        printf("is a positive number\n");
    } else {
        printf("%d ", positive_or_negative);
        printf("is a negative number\n");
    }
    return 0;
}