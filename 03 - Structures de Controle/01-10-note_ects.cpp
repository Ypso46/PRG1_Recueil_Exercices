#include <iostream>

int main() {
    double noteAConvertir;
    std::cout << "Saissez la note à convertir: (entre 0 et 6)" << std::endl;
    std::cin >> noteAConvertir;

    std::string noteECTS;

    if (noteAConvertir >= 0 && noteAConvertir < 3.75) {
        noteECTS = "F";
    } else if (noteAConvertir >= 3.75 && noteAConvertir < 4.25) {
        noteECTS = "E";
    } else if (noteAConvertir >= 4.25 && noteAConvertir < 4.5) {
        noteECTS = "D";
    } else if (noteAConvertir >= 4.5 && noteAConvertir < 4-75) {
        noteECTS = "C";
    } else if (noteAConvertir >= 4.75 && noteAConvertir <= 5) {
        noteECTS = "B";
    } else if (noteAConvertir >= 5.25 && noteAConvertir <= 6) {
        noteECTS = "A";
    } else {
        std::cout << "Erreur" << std::endl;
    }



    return 0;
}