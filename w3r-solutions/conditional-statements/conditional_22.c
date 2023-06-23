#include <stdio.h>
#include <string.h>

int get_positive_integer(const char *defaultProompt, const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 10) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int number =
        get_positive_integer("enter a number: ", "enter a valid number: ");
    char nums[10][10] = {"One", "Two",   "Three", "Four", "Five",
                         "Six", "Seven", "Eight", "Nine"};
    printf("%s\n", nums[number - 1]);

    return 0;
}