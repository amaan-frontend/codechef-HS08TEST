#include<stdio.h>

int main() {
    int withdrawAmount;
    float accountBalance;
    scanf("%d %f", &withdrawAmount, &accountBalance);

    // Check if the withdrawal amount is a multiple of 5
    if (withdrawAmount % 5 != 0) {
        printf("%.2f", accountBalance); // Output current account balance
    } else {
        // Calculate the total amount including bank charges
        float totalAmount = withdrawAmount + 0.50;

        // Check if the account balance is sufficient for the transaction
        if (accountBalance >= totalAmount) {
            // Update the account balance after the successful transaction
            float updatedBalance = accountBalance - totalAmount;
            printf("%.2f", updatedBalance); // Output updated account balance
        } else {
            printf("%.2f", accountBalance); // Output current account balance
        }
    }

    return 0;
}
