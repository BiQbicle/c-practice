#include <stdio.h>

int get_positive_integer(const char *defaultProompt, const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int integers[5];
    integers[0] = get_positive_integer("enter your first number: ",
                                       "enter a valid number: ");
    integers[1] = get_positive_integer("enter your first number: ",
                                       "enter a valid number: ");
    integers[2] = get_positive_integer("enter your first number: ",
                                       "enter a valid number: ");
    integers[3] = get_positive_integer("enter your first number: ",
                                       "enter a valid number: ");
    integers[4] = get_positive_integer("enter your first number: ",
                                       "enter a valid number: ");
    int total = 0;
    for (int j = 0; j < 5; j++) {
        if ((integers[j] % 2) != 0) {
            total += integers[j];
        }
    }
    printf("Sum of all odd values: %d\n", total);

    return 0;
}