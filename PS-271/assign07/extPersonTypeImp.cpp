#include <iostream>
#include "addressType.h"
#include "personType.h"
#include "extPersonType.h"



void extPersonType::printPerson() const
{
	cout << firstName << lastName << streetAddress << cityAddress << stateAddress << zipAddress;
}
//writes out the person name
void extPersonType::setPerson(std::string first, std::string last, std::string street, std::string city, std::string state, std::string zip)
{
	personType::setName(first, last);
	addressType::setAddress(street, city, state, zip);
}
//sets all the information for this class.
string extPersonType::getFirstName(std::string first) const
{
	return firstName;
}
//get first name
string extPersonType::getLastName(std::string last) const
{
	return lastName;
}
//get last bname
string extPersonType::getStreet(std::string street) const
{
	return streetAddress;
}
//get street address
string extPersonType::getCity(std::string city) const
{
	return cityAddress;
}
//get city
string extPersonType::getState(std::string state) const
{
	return stateAddress;
}
//get state
string extPersonType::getZip(std::string zip) const
{
	return zipAddress;
}
//get state
extPersonType::extPersonType(std::string first, std::string last, std::string street, std::string city, std::string state, std::string zip) : addressType(street, city, state, zip), personType(first, last)
{
	setAddress(street, city, state, zip);
	setName(first, last);
}
//constructor