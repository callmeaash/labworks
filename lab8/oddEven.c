#include <stdio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int N, num;

    dataFile = fopen("data.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening data file!\n");
        return 1;
    }

    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d\n", num);
    }

    fclose(dataFile);

    dataFile = fopen("data.txt", "r");
    if (dataFile == NULL) {
        printf("Error opening data file for reading!\n");
        return 1;
    }

    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");
    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening odd or even file!\n");
        fclose(dataFile);
        return 1;
    }

    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Odd and even numbers written to 'odd.txt' and 'even.txt' respectively.\n");

    return 0;
}
