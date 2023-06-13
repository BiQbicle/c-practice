#include <stdio.h>

int get_number_from_stdin(const char *defaultProompt,
                          const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < 1 || end > 100) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

int main() {
    int marks_math = get_number_from_stdin("enter your marks in maths: ",
                                           "enter a valid number: ");
    int marks_physics = get_number_from_stdin("enter your marks in physics: ",
                                              "enter a valid number: ");
    int marks_chemistry = get_number_from_stdin(
        "enter your marks in chemistry: ", "enter a valid number: ");
    if (marks_math + marks_physics + marks_chemistry >= 195) {
        printf("Congratulations! you've passed!\n");
    } else if (marks_math + marks_physics >= 140) {
        printf("your good enough to pass...\n");
    } else {
        printf("your not eligible to pass\n");
    }

    return 0;
}