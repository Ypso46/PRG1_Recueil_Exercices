#include <iostream>

int main() {
    /*
     * Réécrire les codes suivants avec un ou des opérateurs ternaires
     *  if (a > 0) {
            b += a;
        } else {
            b -= 2*a;
        }
     */
    int a, b;
    b = ((a > 0) ? b + a : b - 2*a);
    std::cout << b << std::endl;

    /*
     * if (d == 0.) {
            r = 1e100;
        } else {
            r = n/d;
        }
     */
    double d, r;
    r = ((d == 0.) ? 1e100 : r/d);
    std::cout << r << std::endl;

    /*
     * if (a > 0) {
        b += 1;
    } else if (a == 0) {
        b = 0;
    } else {
        b *= 2;
    }
     */
    b = ((a > 0) ? b + 1 : (a == 0) ? 0 : b * 2);
    std::cout << b << std::endl;

    //===================================
    //Partie 2

    //a = a >= 1 ? 42 : a * a;
    if (a >= 1) {
        a = 42;
    } else {
        a *= a;
    }

    // b = a == 2 ? 32 : ( a < 5 ? 12 : 23 );
    if (a == 2) {
        b = 32;
    } else if (a < 5) {
        b = 12;
    } else {
        b = 23;
    }

    int c;
    // c = a < 0 ? ( b < 0 ? a : -a ) : ( b < 5 ? a + b : a - b );
    if (a < 0) {
        if (b < 0) {
            c =a;
        } else {
            c = -a;
        }
    } else if (b < 5) {
        c = a + b;
    } else {
        c = a - b;
    }

    return 0;
}