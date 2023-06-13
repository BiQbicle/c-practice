#include <stdio.h>
#include <string.h>

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
int get_roll_number_from_stdin(const char *defaultProompt,
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
    char name[20];

    int roll_no = get_roll_number_from_stdin("Enter your role number: ",
                                             "enter a valid roll number");
    printf("Enter the name of student: ");
    scanf("%s", name);

    int physics_marks;
    int chemistry_marks;
    int computer_application_marks;
    printf("Enter Physics, Chemistry, Computer Application marks: ");
    scanf("%d%d%d", &physics_marks, &chemistry_marks,
          &computer_application_marks);
    printf("-------------------\n");
    printf("Roll Number Of Student: %d\n", roll_no);
    printf("Name Of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics_marks);
    printf("Marks in Chemistry: %d\n", chemistry_marks);
    printf("Marks in Computer Application: %d\n", computer_application_marks);

    int total = physics_marks + chemistry_marks + computer_application_marks;
    printf("Total = %d\n", total);

    double percentage = (total / 300.0) * 100;
    printf("Percentage = %lf\n", percentage);

    if (percentage >= 80) {
        printf("Division: First\n");
    } else if (percentage >= 60) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third");
    }

    return 0;
}