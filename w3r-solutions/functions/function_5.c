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
    int a = get_positive_integer("enter a number: ", "enter a valid number: ");
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}