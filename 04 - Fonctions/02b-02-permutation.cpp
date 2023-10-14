#include <iostream>
#include <cstdlib>

void swapRight (double& x, double& y, double& z) {
    double temp = z;
    z = y;
    y = x;
    x = temp;
}

int main() {

    return EXIT_SUCCESS;
}