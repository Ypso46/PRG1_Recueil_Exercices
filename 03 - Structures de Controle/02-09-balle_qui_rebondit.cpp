#include <iostream>
#include <cstdlib>
#include <cmath>

int main() {

    double coefRebond;
    do {
        std::cout << "Coefficient de rebond (0 <= coeff < 1) : " << std::endl;
        std::cin >> coefRebond;
    } while (coefRebond >= 1 || coefRebond < 0);

    double hauteurInitiale;
    do {
        std::cout << "Hauteur initiale [m]  (h0 >= 0) : " << std::endl;
        std::cin >> hauteurInitiale;
    } while (hauteurInitiale < 0);

    double nombreRebonds;
    do {
        std::cout << "Nombre de rebonds     (n >= 0) : " << std::endl;
        std::cin >> nombreRebonds;
    } while (nombreRebonds < 0);


    const double G = 9.81;
    double v0 = sqrt((2 * G * hauteurInitiale));
    double v1 = coefRebond * v0;
    double hauteur1 = (pow(v1, 2) / (2 * G));

    for (int i = 1; i < nombreRebonds; ++i) {
        v0 = sqrt((2 * G * hauteur1));
        v1 = coefRebond * v0;
        hauteur1 = (pow(v1, 2) / (2 * G));
    }
    
    std::cout << "La hauteur atteinte après " << nombreRebonds << " rebonds : " << hauteur1 << " [m]";

    return EXIT_SUCCESS;
}