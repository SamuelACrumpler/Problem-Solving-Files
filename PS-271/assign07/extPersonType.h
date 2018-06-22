#ifndef H_extPersonType
#define H_extPersonType

#include <string>
#include "personType.h"
#include "addressType.h"




class extPersonType : public personType, public addressType
{
public:
	void printPerson() const;
	//writes out the person name
	void setPerson(std::string first, std::string last, std::string street, std::string city, std::string state, std::string zip, std::string member, std::string phone);
	//sets all the information for this class.
	std::string getFirstName(std::string first) const;
	//get first name
	std::string getLastName(std::string last) const;
	//get last bname
	std::string getStreet(std::string street) const;
	//get street address
	std::string getCity(std::string city) const;
	//get city
	std::string getState(std::string state) const;
	//get state
	std::string getZip(std::string zip) const;
	//get state
	std::string getMember(std::string member) const;
	//get state
	std::string getPhone(std::string phone) const;
	//get state
	extPersonType(std::string first, std::string last, std::string street, std::string city, std::string state, std::string zip);
	//constructor
private:
	std::string firstName;
	std::string lastName;
	std::string streetAddress;
	std::string cityAddress;
	std::string stateAddress;
	std::string zipAddress;
	std::string memberPerson;
	std::string phonePerson;

};

#endif // !H_extPersonType
