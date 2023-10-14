#include <iostream>
#include <cstdlib>

void afficheCaracteres(char a, char b) {
    if (a > b) {
        return;
    } else {
        for (int i = a; i <= b; ++i) {
            std::cout << char(i);
        }
    }
}
void f() {
    std::cout << "test" << std::endl;
};
int main() {
    f();
    char a, b;
    std::cout << "Entrez deux caractères" << std::endl;
    std::cin >> a >> b;

    afficheCaracteres(a, b);

    return EXIT_SUCCESS;
}