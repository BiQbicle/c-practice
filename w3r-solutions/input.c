#include "input.h"

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

int get_positive_negative_integer(const char *defaultProompt,
                                  const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < -1000 || end > 1000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

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
