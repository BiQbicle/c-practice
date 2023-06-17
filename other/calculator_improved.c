#include <math.h>
#include <stdio.h>

int get_number(const char *userprompt, const char *errorprompt) {
    int limit;
    printf("%s", userprompt);
    scanf("%d", &limit);
    while (limit < 1 || limit > 10000) {
        printf("%s", errorprompt);
        scanf("%d", &limit);
    }
    return limit;
}
char get_operator(const char *userprompt, const char *errorprompt) {
    char ope;
    printf("%s", userprompt);
    scanf("%c", &ope);
    while (ope != '+' && ope != '-' && ope != '*' && ope != '/' && ope != '$' &&
           ope != '%') {
        printf("%s", errorprompt);
        scanf("%c", &ope);
    }
    return ope;
}

int addition(int a, int b) { return a + b; }

int subtraction(int a, int b) { return a - b; }

int division(int a, int b) { return a / b; }

int multiplication(int a, int b) { return a * b; }

double squareRoot(int a) { return sqrt(a); }

int modulus(int a, int b) { return a % b; }

int main() {
    int value1 =
        get_number_from_stdin("Enter first number: ", "Enter a valid number: ");
    int value2 = get_number_from_stdin("Enter your second number: ",
                                       "Enter a valid number");

    char op = get_operator("Enter your operator", "Enter a valid operator");

    printf("Type Your First Number: ");
    // scanf("%d", &value1);

    printf("Type Your Second Number: ");
    scanf("%d", &value2);

    printf("What Operation Do You Want to Use: ");
    scanf(" %c", &op);

    int result;
    double doubleResult;

    if (op == '+') {
        result = addition(value1, value2);
        printf("%d", result);
    } else if (op == '-') {
        result = subtraction(value1, value2);
        printf("%d", result);
    } else if (op == '/') {
        result = division(value1, value2);
        printf("%d", result);
    } else if (op == '*') {
        result = multiplication(value1, value2);
        printf("%d", result);
    } else if (op == '$') {
        doubleResult = squareRoot(value1);
        printf("%lf", doubleResult);
    } else if (op == '%') {
        result = modulus(value1, value2);
        printf("%d", result);
    } else {
        printf("This Is not a valid operator");
    }

    return 0;
}
