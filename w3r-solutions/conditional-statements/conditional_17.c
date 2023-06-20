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
    char vowel_or_consonant =
        get_char("Enter a letter: ", "Enter a valid letter: ");

    if ((vowel_or_consonant == 'a') || (vowel_or_consonant == 'e') ||
        (vowel_or_consonant == 'i') || (vowel_or_consonant == 'o') ||
        (vowel_or_consonant == 'u')) {
        printf("%c is a vowel\n", vowel_or_consonant);
    } else {
        printf("%c is a consonant\n", vowel_or_consonant);
    }

    return 0;
}
