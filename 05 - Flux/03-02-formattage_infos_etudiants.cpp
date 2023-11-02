#include <iostream>
#include <cstdlib>

int main() {

  int a = 49;
  int* param = &a;

  std::cout << param << std::endl;
  std::cout << &param << std::endl;
  std::cout << *param << std::endl;
  return EXIT_SUCCESS;
}