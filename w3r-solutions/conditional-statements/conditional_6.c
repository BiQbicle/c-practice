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
    int m = get_number_from_stdin("Enter an integer", "enter a valid iteger");
    if (m > 0) {
        printf("Value of m = 1");
    } else if (m < 0) {
        printf("value of m = -1");
    }

    return 0;
}