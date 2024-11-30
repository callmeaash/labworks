#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    char address[100];
    float salary;
};

void sortEmployees(struct employee emp[], int n) {
    struct employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(emp[i].name, emp[j].name) > 0) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", emp[i].name);
        printf("Address: ");
        scanf(" %s", emp[i].address);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    sortEmployees(emp, n);

    printf("\nEmployee Records in Ascending Order of Name:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Address: %s\n", emp[i].address);
        printf("Salary: %.2f\n\n", emp[i].salary);
    }

    return 0;
}
