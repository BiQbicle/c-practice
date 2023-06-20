#include <stdio.h>

int get_positive_negative_integer(const char *defaultProompt,
                                  const char *errorProompt) {
    int end;
    printf("%s", defaultProompt);
    scanf("%d", &end);
    while (end < -10000 || end > 10000) {
        printf("%s", errorProompt);
        scanf("%d", &end);
    }
    return end;
}

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
    int cost_price = get_positive_integer("Enter the cost price: ",
                                          "enter a valid cost price: ");
    int selling_price = get_positive_integer("Enter the selling price: ",
                                             "enter a valid selling price: ");
    if (selling_price > cost_price) {
        printf("It is a profit\n");
    } else if (selling_price == cost_price) {
        printf("It is neither a loss or a profit\n");
    } else {
        ("It is a loss\n");
    }

    return 0;
}