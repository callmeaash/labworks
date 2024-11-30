#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text (press Enter to finish):\n");
    while ((ch = getchar()) != '\n') {
        fputc(ch, file);
    }

    fclose(file);
    printf("Text written to file successfully.\n");
    return 0;
}
