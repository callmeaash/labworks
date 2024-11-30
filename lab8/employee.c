#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char post[50];
    float salary;
};

int main() {
    FILE *file;
    int numEmployees;

    file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        getchar();
        printf("Enter Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        printf("Enter Post: ");
        fgets(employees[i].post, sizeof(employees[i].post), stdin);
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    for (int i = 0; i < numEmployees; i++) {
        fprintf(file, "ID: %d\nName: %sPost: %sSalary: %.2f\n\n", 
                employees[i].id, employees[i].name, employees[i].post, employees[i].salary);
    }

    fclose(file);
    printf("\nEmployee details written to 'employees.txt' successfully.\n");
    return 0;
}
