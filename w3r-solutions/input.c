#include "input.h"

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

char get_char_from_stdin(const char *defaultPrompt, const char *errorPrompt) {
    char end;
    printf("%s", defaultPrompt);
    scanf(" %c", &end);
    while (!((end >= 'a' && end <= 'z') || (end >= 'A' && end <= 'Z'))) {
        printf("%s", errorPrompt);
        scanf(" %c", &end);
    }
    return end;
}
