#include <iostream>
#include <cstdlib>

double result = 0;

bool operation(double a, double b, char c) {
    if (c == '+') {
        result = a + b;
    } else if (c == '-') {
        result = a - b;
    } else if (c == '*') {
        result = a * b;
    } else if (c == '/') {
        result = a / b;
    } else {
        return false;
    }
    return true;
}

int main() {
    double nombre1, nombre2;
    char signe;

    std::cout << "Entrez deux chiffres et un opérateur (+, -, *, /) " << std::endl;
    std::cin >> nombre1 >> nombre2 >> signe;

    if (operation(nombre1, nombre2, signe)) {
        std::cout << "Le résultat de l'opération est = " << result << std::endl;
    } else {
        std::cout << "Le signe entré n'était pas correct !" << std::endl;
    }
    return EXIT_SUCCESS;
}
