#include <iostream>

int main() {

    int b, i, j, k;

    b = (i < 1) || (i > 2); //correct

    b = (j == 0) || ((b) || (i / j < k)); //faux. Bonne réponse : b = (j == 0) or (i / j >= k);

    b = (j != 0) && ( i / j < k);



    return 0;
}