#include <iostream>

int main() {
    /*
     * ecrire avec un if
     * switch (a) {
        case 0 : cout << "A"; break;
        case 1 : cout << "Z"; break;
        case 2 : cout << "a"; break;
        default : cout << "b"; break;
        }
     */

    int a;
    if (a == 0) {
        std::cout << "A";
    } else if (a == 1) {
        std::cout << "Z";
    } else if (a == 2) {
        std::cout << "a";
    } else {
        std::cout << "b";
    }

    /*
     * switch (a) {
        case 0 : cout << "0";
        default : cout << "D"; break;
        }
     */

    if (a == 0) {
        std::cout << "0D";
    } else {
        std::cout << "D";
    }

    /*
     * switch (a) {
        case 0 :
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 : cout << "A"; break;
        case 6 : cout << "3";
        case 7 : cout << "4"; break;
        default : cout << "D";
        }
     */

    if (a >= 0 && a <= 5) {
        std::cout << "A";
    } else if (a == 6) {
        std::cout << "34";
    } else if (a == 7) {
        std::cout << "4";
    } else {
        std::cout << "D";
    }

    //=============================
    /*
     * ecrire avec un switch
     * if (a == 1) {
        cout << "A";
        } else if (a == 4) {
        cout << "C";
        } else if (a == 2) {
        cout << "E";
        } else {
        cout << "BA";
        }
     */

    switch (a) {
        case 1 : std::cout << "A"; break;
        case 2 : std::cout << "E"; break;
        case 4 : std::cout << "C"; break;
        default : std::cout << "BA";
    }

    /*
     * if (a < 0 or a >= 5) {
        cout << "D";
        } else if (a < 3) {
        cout << "A";
        } else {
        cout << "B";
        }
     */

    switch (a) {
        case 0 :
        case 1 :
        case 2 : std::cout << "A";break;
        case 3 :
        case 4 : std::cout << "B"; break;
        default : std::cout << "D";
    }

    return 0;
}