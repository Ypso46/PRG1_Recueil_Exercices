#include <iostream>
#include <cmath>

int main() {
    std::cout << "Donnez les valeurs de a, b, et c de l'équation a*x^2+b*x+c : ";
    double a, b, c;
    std::cin >> a >> b >> c;

    double discriminant = pow((b), 2) - (4 * a * c);
    double x1 = (-b + (sqrt(discriminant)) / 2 * a);
    double x2 = (-b - (sqrt(discriminant)) / 2 * a);
    double vietNeutre = ((-b) / 2 * a);

    if (discriminant < 0) {
        std::cout << "Pas de solutions dans R" << std::endl;
    } else if (discriminant == 0) {
        std::cout << "Une solution qui est : " << vietNeutre << std::endl;
    } else {
        std::cout << "Deux solutions qui sont : x1 = " << x1 << " et x2 = " << x2 << std::endl;
    }


}