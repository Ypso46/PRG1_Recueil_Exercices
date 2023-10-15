#include <iostream>
#include <cstdlib>

double withdraw(double& a, double& b) {
    double withdrawAmount;

    if (b > a || b == a) {
        withdrawAmount = a;
        b = withdrawAmount;
        a = 0;
    } else {
        withdrawAmount = b;
        a -= b;
    }
    return withdrawAmount;
}

int main() {
    double currentBalance;
    double withdrawalAmount;

    do {
    std::cout << "Enter the current amount and the amount you need to withdraw (both >= 0): " << std::endl;
    std::cin >> currentBalance >> withdrawalAmount;
    } while (currentBalance < 0 || withdrawalAmount < 0);

    std::cout << "Initial balance = " << currentBalance << std::endl;
    std::cout << "Withdraw amount = " << withdrawalAmount << std::endl;
    withdraw(currentBalance, withdrawalAmount);
    std::cout << "Your withdraw amount = " << withdrawalAmount << std::endl;
    std::cout << "Your current balance = " <<  currentBalance << std::endl;
    if (currentBalance <= 0) {
        return EXIT_SUCCESS;
    }

    do {
        std::cout << "Enter the amount you want to withdraw: " << std::endl;
        std::cin >> withdrawalAmount;
        withdraw(currentBalance, withdrawalAmount);
        std::cout << "Your withdraw amount = " << withdrawalAmount << std::endl;
        std::cout << "Your current balance = " <<  currentBalance << std::endl;
    } while (currentBalance > 0);

    return EXIT_SUCCESS;
}