//addressType.h

#ifndef H_addressType
#define H_addressType


using namespace std;

class addressType
{
public:
	void printAdd() const;
		//Writes out the address of the user

	void setAddress(string street, string city, string state, string zip);
		//sets the address

	string getStreet() const;
		//get street

	string getCity() const;
		//get city

	string getState() const;
		//get state

	string getZip() const;
		//get zip

	addressType(string street = "", string city = "", string state = "", string zip = "");
	//constructor
	// Will set the class values based on the parameters entered.

private:
	string streetAddress;
	string cityAddress;
	string stateAddress;
	string zipAddress;

};

#endif // !1
