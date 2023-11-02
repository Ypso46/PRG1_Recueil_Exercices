#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main() {

  std::string nameOfFile;
  std::cout << "Entrez un nom de fichier" << std::endl;
  std::cin >> nameOfFile;
  std::cin.get();
  std::ofstream myFile;

  std::string textePourFichier;
  const std::string terminer = "#exit#";

  while(textePourFichier != terminer) {
    myFile.open(nameOfFile, std::ios::app);
    std::cout << "Entrez du texte à écrire dans le fichier" << std::endl;
    std::getline(std::cin, textePourFichier);

    myFile << textePourFichier;
    myFile.close();
  }


  std::cout << "atteignable ?" << std::endl;


  return EXIT_SUCCESS;
}