#include <iostream>
#include <cstdlib>

double calculVolumePyramide(double a, double b, double c) {
    const double valeurCalculVolume = 1.0/6.0;
    return (valeurCalculVolume * a * b * c);
}

int main() {

    //Pyramide 1
    double longueur1 = 10.;
    double largeur1 = 3.5;
    double hauteur1 = 12.;

    //Pyramide 2
    double longueur2 = 3.6;
    double largeur2 = 2.4;
    double hauteur2 = 2.7;

    double volume1 = calculVolumePyramide(longueur1, largeur1, hauteur1);
    std::cout << "Le volume de la pyramide 1 est de " << volume1 << std::endl;

    double volume2 = calculVolumePyramide(longueur2, largeur2, hauteur2);
    std::cout << "Le volume de la pyramide 2 est de " << volume2 << std::endl;

    return EXIT_SUCCESS;
}