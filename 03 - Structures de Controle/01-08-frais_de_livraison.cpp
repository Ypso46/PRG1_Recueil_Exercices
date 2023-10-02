#include <iostream>

int main() {

    const int livraisonSuisse = 5;
    const int livraisonSpecialeSuisse = 7; //inclus le Lichtenstein, les Grisons et le Tessin
    const int livraisonWorld = 10;

    std::cout << "Livraison en Suisse ? (O/N) ";
    char reponse1; std::cin >> reponse1;

    if (reponse1 == 'O') {
        std::cout << "Livraison dans les Grisons ou au Tessin ? (O/N) ";
        char response2; std::cin >> response2;
        if (response2 == 'O') {
            std::cout << "Les frais de livraison pour les Grisons ou le Tessin sont de : " << livraisonSpecialeSuisse << ".- CHF" << std::endl;
        } else {
            std::cout << "Les frais de livraison pour la Suisse sont de: " << livraisonSuisse << ".- CHF" << std::endl;
        }
    } else {
        std::cout << "Livraison au Lichtenstein ? (O/N) ";
        char response2; std::cin >> response2;
        if (response2 == 'O') {
            std::cout << "Les frais de livraison pour le Lichtenstein sont de: " << livraisonSpecialeSuisse << ".- CHF" << std::endl;
        } else {
            std::cout << "Les frais de livraison pour votre pays sont de: " << livraisonWorld << ".- CHF" << std::endl;
        }
    }


    return 0;
}