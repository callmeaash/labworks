#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Remarks: ");
        scanf(" %s", students[i].remarks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Remarks: %s\n\n", students[i].remarks);
    }

    return 0;
}
