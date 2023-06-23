#include <stdio.h>

char get_char(const char *defaultPrompt, const char *errorPrompt) {
    char end;
    printf("%s", defaultPrompt);
    scanf(" %c", &end);
    while (!((end >= 'a' && end <= 'z') || (end >= 'A' && end <= 'Z'))) {
        printf("%s", errorPrompt);
        scanf(" %c", &end);
    }
    return end;
}

int main() {
    char grade = get_char("enter the grade: ", "enter a valid grade: ");

    if (grade == 'E' || grade == 'e') {
        printf("Excellent\n");
    } else if (grade == 'V' || grade == 'v') {
        printf("Very Good\n");
    } else if (grade == 'G' || grade == 'g') {
        printf("Good\n");
    } else if (grade == 'A' || grade == 'a') {
        printf("Average\n");
    } else if (grade == 'F' || grade == 'f') {
        printf("Fail\n");
    } else {
        printf("Not a valid grade");
    }

    return 0;
}