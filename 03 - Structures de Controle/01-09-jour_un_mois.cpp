#include <iostream>

int main() {
    std::cout << "Entrez un no de mois (1-12) : ";
    int no_mois; std::cin >> no_mois;

    std::cout << "Ce mois comporte ";

    switch (no_mois) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: std::cout << "31"; break;
        case 4:
        case 6:
        case 9:
        case 11: std::cout << "30"; break;
        case 2: std::cout << "28 ou 29"; break;
        default: std::cout << "Erreur, veuillez entrer un nombre entre 1 et 12";
    }

    std::cout << " jours." << std::endl;
}