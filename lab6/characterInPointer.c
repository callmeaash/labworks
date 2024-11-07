#include <stdio.h>

int main() {
    const char *colors[] = {"Red", "Green", "Blue", "Yellow", "Purple"};

    int n = sizeof(colors) / sizeof(colors[0]);

    printf("List of colors:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", colors[i]);
    }

    return 0;
}
