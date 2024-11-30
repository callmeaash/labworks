#include <stdio.h>

struct customer {
    char name[50];
    int account_no;
    float balance;
};

int main() {
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    struct customer customers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", customers[i].name);
        printf("Account Number: ");
        scanf("%d", &customers[i].account_no);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    struct customer *highest = &customers[0];
    struct customer *lowest = &customers[0];

    for (int i = 1; i < n; i++) {
        if (customers[i].balance > highest->balance) {
            highest = &customers[i];
        }
        if (customers[i].balance < lowest->balance) {
            lowest = &customers[i];
        }
    }

    printf("\nCustomer with the highest balance:\n");
    printf("Name: %s\n", highest->name);
    printf("Account Number: %d\n", highest->account_no);
    printf("Balance: %.2f\n", highest->balance);

    printf("\nCustomer with the lowest balance:\n");
    printf("Name: %s\n", lowest->name);
    printf("Account Number: %d\n", lowest->account_no);
    printf("Balance: %.2f\n", lowest->balance);

    return 0;
}
