#include <iostream>
#include <cstdlib>

int main() {

    int entier1, entier2;
    do {
        std::cout << "Donnez deux nombres entiers positifs :" << std::endl;
        std::cin >> entier1 >> entier2;
    } while (entier1 <= 0 || entier2 <= 0);




    return EXIT_SUCCESS;
}
