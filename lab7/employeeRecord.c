#include <stdio.h>

struct employee {
    char name[50];
    float salary;
    int age;
    char department[30];
};

int main() {
    struct employee employees[3];
    float totalSalary = 0;
    int totalAge = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Department: ");
        scanf(" %s", employees[i].department);

        totalSalary += employees[i].salary;
        totalAge += employees[i].age;
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
        printf("Department: %s\n\n", employees[i].department);
    }

    printf("Average Salary: %.2f\n", totalSalary / 20);
    printf("Average Age: %.2f\n", (float)totalAge / 20);

    return 0;
}
