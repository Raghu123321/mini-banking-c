#include <stdio.h>
#include <stdlib.h>

float balance = 1000.0;

void checkBalance() {
    printf("Current balance: ₹%.2f\n", balance);
}

void deposit() {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    balance += amount;
    printf("₹%.2f deposited.\n", amount);
}

void withdraw() {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("₹%.2f withdrawn.\n", amount);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoose: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: checkBalance(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 4);
    return 0;
}
