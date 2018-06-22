#ifndef H_addressBookType
#define H_addressBookType

#include <iostream>
#include "addressType.h"
#include "personType.h"
#include "extPersonType.h"

class addressBookType
{
public:
	void setEntry();
	//set the book information
	void getBook(int bookIndex); //needs to be a struct
	//get the book information
	addressBookType();
	//initialize an empty 500 array
private:
	int bookCount;
	struct bookEntry {
		string firstName;
		string lastName;
		string streetAddress;
		string cityAddress;
		string stateAddress;
		string zipAddress;
		string memberPerson;
		string memberPhone;
	};
};
#endif // !





