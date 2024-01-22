#include <string>

class Person
{
private: // public:
    std::string first_name;
    std::string surname;

public:
    Person(std::string firstName, std::string surName);
    std::string getFirstName();
    std::string getSurname();
};