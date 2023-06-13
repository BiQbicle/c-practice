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
    int age =
        get_number_from_stdin("enter an age: ", "please enter a valid age: ");
    if (age >= 18) {
        printf("Congratulation! You are eligible for casting your vote.");
    } else {
        printf("Yout underage! You cannot vote!");
    }

    return 0;
}