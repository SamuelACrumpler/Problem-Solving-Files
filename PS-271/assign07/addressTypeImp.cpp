//addressTypeImp

#include <iostream>
#include <string>
#include "addressType.h"

using namespace std;

void addressType::printAdd() const
{
	cout << streetAddress << cityAddress << stateAddress << zipAddress;
}

void addressType::setAddress(string street, string city, string state, string zip)
{
	streetAddress = street;
	cityAddress = city;
	stateAddress = state;
	zipAddress = zip;
}

string addressType::getState() const
{
	return streetAddress;
}

string addressType::getCity() const
{
	return cityAddress;
}

string addressType::getState() const
{
	return stateAddress;
}

string addressType::getZip() const
{
	return zipAddress;
}

addressType::addressType(string street, string city, string state, string zip)
{
	streetAddress = street;
	cityAddress = city;
	stateAddress = state;
	zipAddress = zip;
}
