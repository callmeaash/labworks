#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    file = fopen("record.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %sAge: %d\n", name, age);

    fclose(file);
    printf("Information written to file successfully.\n");
    return 0;
}
