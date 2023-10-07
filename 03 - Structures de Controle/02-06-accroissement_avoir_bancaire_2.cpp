#include <iostream>
#include <cstdlib>

int main() {

    double montantInitial, tauxInteret, nombreAnnees;
    do {
        std::cout << "Saisissez un montant initial : " << std::endl;
        std::cin >> montantInitial;
    } while (montantInitial <= 1000);

    do {
        std::cout << "Saisissez un taux d'intérêt : " << std::endl;
        std::cin >> tauxInteret;
    } while (tauxInteret <= -5 || tauxInteret >= 50);

    do {
        std::cout << "Saisissez un nombre d'années : " << std::endl;
        std::cin >> nombreAnnees;
    } while (nombreAnnees <= 0);

    double nouveauCapital = montantInitial;

    for (int i = 0; i < nombreAnnees; ++i) {
        nouveauCapital += (nouveauCapital * tauxInteret) / 100;
    }

    std::cout << "Le montant disponible après " << nombreAnnees << " est de " <<  nouveauCapital << " CHF" << std::endl;

    return EXIT_SUCCESS;
}