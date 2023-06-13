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
    int even_or_odd = get_number_from_stdin("please input an integer: ",
                                            "please input a valid integer: ");
    if (even_or_odd % 2 == 0) {
        printf("%d ", even_or_odd);
        printf("is an even number\n");
    } else {
        printf("%d ", even_or_odd);
        printf("is an odd number\n");
    }
}