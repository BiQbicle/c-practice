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

int main(void) {
    int integer =
        get_positive_integer("enter an integer: ", "enter a valid integer: ");
    //  int range = (integer / 5 + 1) * 5;
    int range = integer - (integer % 5) + 5;
    if (range < 80) {
        printf("Range [0, %d]\n", range);
    } else {
        printf("%d is greater than or equal 80\n", range);
    }

    return 0;
}