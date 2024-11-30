#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int roll;
    struct date dob;
};

int main() {
    struct student s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %s", s.name);
    printf("Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
