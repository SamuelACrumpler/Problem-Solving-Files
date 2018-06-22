/*
Samuel Crumpler
CSCI 271-5865
Assignment #2
Due Date: 9/30/2016

Problem: The program presents a logic error in that a line within the program is not used at all


Solution: Remove the line that does absolutely nothing.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double cost;
	double area;
	double bagSize;

	cout << "Enter the amount of fertilizer, in pounds, " << "in one bag: ";
	// Fertilizer in pounds; i.e: 5lbs
	cin >> bagSize;
	cout << endl;

	cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
	// The cost of the fertilizer bag. i.e: 3
	cin >> cost;
	cout << endl;
	//Get the area of the land that needs to be fertilized
	cout << "Enter the area, in square feet, that can be " << "fertizilied by one bag: ";
	cin >> area;
	cout << endl;
	// Figure out fert per pound cost, by dividing bagSize by Cost.
	cout << "The cost of the fertilizer per pound is: $" << bagSize / cost << endl;
	// Use the total cost of the bag and divide by area to figure out Square Feet per Cost
	cout << "The cost of fertilizing per square foot is: $" << area / cost << endl;

	cin >> cost;
	return 0;

}