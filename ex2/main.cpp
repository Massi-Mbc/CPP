#include "Person.hpp"
#include <iostream>
#include <vector>
int main(int argc, char const *argv[])
{
    // Person person;
    // person.first_name = "La Falluche";
    // person.surname = "Palluche";
    // std::cout << "La personne s'appelle " << person.surname << " " << person.first_name << std::endl;
    // Person myPerson("luche", "La Falus");
    // std::cout << "La personne s'appelle " << myPerson.getFirstName() << " " << myPerson.getSurname() << std::endl;

    std::cout << "Nombre de personnes : ";
    int numberOfPerson, tmp = 0;
    std::cin >> numberOfPerson;

    std::vector<Person> peoples;
    for (auto i = 0; i < numberOfPerson; ++i)
    {
        std::string firstName, surname;
        // dmd le prenom
        std::cout << "Prenom: ";
        std::cin >> firstName;
        // dmd le nom
        std::cout << "Nom: ";
        std::cin >> surname;
        // ajouter ds le tab
        peoples.emplace_back(firstName, surname);
    }

    // afficher les prenims et nom de toutes les personnes
    for (auto person : peoples)
    {
        std::cout << person.getFirstName() << " " << person.getSurname();
        if (tmp < numberOfPerson)
        {
            std::cout << ", ";
        }
    }
    std::cout << "." << std::endl;
    return 0;
}
