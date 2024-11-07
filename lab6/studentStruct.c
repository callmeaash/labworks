#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float mark;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf("%20s", student.name);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter mark: ");
    scanf("%f", &student.mark);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Mark: %.2f\n", student.mark);

    return 0;
}
