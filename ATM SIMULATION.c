#include <stdio.h>

int main() 
{
    int pass, pin, choice;
    float balance, amount;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    printf("---WELCOME TO THE ATM SIMULATION---\n");

    // ? Take initial balance (optional in real ATM, but okay here for learning)
    printf("Enter your balance amount: ?");
    scanf("%f", &balance);  // ? Corrected: Removed '\n'

    printf("Enter your password: ");
    scanf("%d", &pass);

    if (pass != pin) {
        printf("Your password is wrong.\n");
        return 0;
    }

    while (choice != 4) {
        printf("\n----- ATM MENU ------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  // ? Now you’re reading choice each time

        switch (choice) {
            case 1:
                printf("Your balance is: ?%.2f\n", balance);
                break;

            case 2:
                printf("Enter the amount to deposit: ?");
                scanf("%f", &amount);  // ? Corrected format
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited ?%.2f successfully.\n", amount);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter the amount to withdraw: ?");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn ?%.2f successfully.\n", amount);
                } else {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;

            case 4:
                printf("THANK YOU FOR USING THE ATM.\n");
                break;

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}

