#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "Entre ton nom: "; // ici on écrit un msg sur la sortie std
    std::string name;
    std::cin >> name;
    // char name[20] = "";                // On crée un tab de char de taille 20
    // std::cin >> std::setw(20) >> name; // on deplace l'entrée std dans name
    // // std::cout << "Bonjour Palluche La Falluche !" << std::endl; // on écrit dans la sortie standard
    std::cout << "Bonjour " << name << " !" << std::endl; // on écrit dans la sortie standard

    return 0;
}

// On remarque que la chaine à était
// troonqué à 19 caractères dont le dernier étant le '\0'.
// On devrait utiliser "std::string"