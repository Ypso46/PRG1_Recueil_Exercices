#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main() {

  std::string nameOfFile;
  std::cout << "Entrez un nom de fichier" << std::endl;
  std::cin >> nameOfFile;
  std::cin.get();

  std::ifstream myFile;

  if (myFile) {
    myFile.open(nameOfFile);

    if (!myFile) {
      std::cerr << "Erreur d'ouverture du fichier\n";
      return 1;
    }
    while (myFile) {
      std::string uneLigne;
      std::getline(myFile, uneLigne);
      std::cout << uneLigne << '\n';
    }
  }

  std::ofstream myFileOut;
  std::string textePourFichier;
  const std::string terminer = "#exit#";

  do {
    myFileOut.open(nameOfFile, std::ios::app);
    std::cout << "Entrez du texte à écrire dans le fichier" << std::endl;
    std::getline(std::cin, textePourFichier);

    myFileOut << textePourFichier;
    myFileOut.close();
  } while(textePourFichier != terminer);

  std::cout << "atteignable ?" << std::endl;


  return EXIT_SUCCESS;
}