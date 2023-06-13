#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
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
    short dwarf_or_not = get_number_from_stdin("Enter your height: ",
                                               "please enter a valid height");
    if (dwarf_or_not <= 147) {
        printf("Your a dwarf\n");
    } else {
        printf("your height is average\n");
    }

    return 0;
}