#include <iostream>

int main() {

    double montantInitial, montantCible, tauxInteret;
    std::cout << "Saisissez un montant initial : " << std::endl;
    std::cin >> montantInitial;
    std::cout << "Saisissez un montant cible : " << std::endl;
    std::cin >> montantCible;
    std::cout << "Saisissez un taux d'intérêt : " << std::endl;
    std::cin >> tauxInteret;

    double augmentationAnnuelle = montantInitial;

    int nombreAnnee = 0;

    while (augmentationAnnuelle <= montantCible) {
        augmentationAnnuelle += (augmentationAnnuelle * tauxInteret) / 100;
        nombreAnnee++;
        if (nombreAnnee > 10000) {
            std::cout << "Le montant ne sera jamais atteint!" << std::endl;
            return 1;
        }
    }

    std::cout << "Le montant cible est atteint après : " << nombreAnnee << " ans." << std::endl;

    return 0;
}