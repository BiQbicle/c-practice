#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < -1000 || end > 100) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int sum = 0;
    int no_of_numbers = get_number_from_stdin(
        "enter how many numbers you want: ", "please enter a valid number: ");

    for (int g = 1; g <= no_of_numbers; g++) {
        sum = sum + g;
        printf("%d\n", g);
    }
    printf("\n The sum is: %d\n", sum);

    return 0;
}