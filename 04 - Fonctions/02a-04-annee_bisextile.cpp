#include <iostream>
#include <cstdlib>

bool estBisextile(int annee) {
    if (annee % 400 == 0) {
        return true;
    } else if (annee % 4 == 0 && annee % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

int main() {

    std::cout << std::boolalpha;
    std::cout << estBisextile(1900) << std::endl;
    std::cout << estBisextile(2000) << std::endl;
    std::cout << estBisextile(2010) << std::endl;
    std::cout << estBisextile(2020) << std::endl;

    return EXIT_SUCCESS;
}