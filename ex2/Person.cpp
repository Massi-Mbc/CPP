#include "Person.hpp"

Person::Person(std::string firstName, std::string surName)
    : first_name(firstName), surname(surName) {}

std::string Person::getFirstName()
{
    return first_name;
}

std::string Person::getSurname()
{
    return surname;
}