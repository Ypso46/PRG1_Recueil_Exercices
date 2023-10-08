#include <iostream>
#include <cstdlib>
#include <iomanip>

int main() {

    int hauteurTriangle;
    do {
        std::cout << "Hauteur du triangle (h > 0) : " << std::endl;
        std::cin >> hauteurTriangle;
    } while (hauteurTriangle <= 0);

    int espacesGauche = hauteurTriangle;
    int nombreEtoiles = 1;

    for (int i = 1; i <= hauteurTriangle; ++i) {
        std::cout << std::setfill(' ') << std::setw(espacesGauche);
        espacesGauche--;
        for (int j = 1; j <= nombreEtoiles; ++j) {
            std::cout << "*";
        }
        nombreEtoiles += 2;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}