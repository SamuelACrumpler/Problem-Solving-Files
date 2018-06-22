/*
Samuel Crumpler
CSCI 272-5527
Assign05
Due Date

Name of file: Assign05

Problem Statement (as you understand it)
	Overload the equality operator for both the linked and non-linked stacks. The overloaded operator
	must check if all elements are equal in both value and type, and also check if both stacks are the
	same size. If all values are the same, return true, otherwise return false.	


Solution (Your steps in solving the problem)
	Write the overload operator code so that it will loop through all values, checking each of them.
	if one of them is not matching return false using a boolean varible, otherwise the boolean 
	variable should remain true.

*/


#include <iostream>
#include <string>
#include "stackADT.h"
#include "myStack.h"
//#include "linkedList.h"


using namespace std;

int main(){
	

	stackType<int> firstStack;
	stackType<int> secondStack;

	firstStack.push(1);
	firstStack.push(2);
	firstStack.push(3);
	firstStack.push(4);
	firstStack.push(5);

	secondStack.push(1);
	secondStack.push(2);
	secondStack.push(3);
	secondStack.push(4);
	secondStack.push(5);

	if (firstStack == secondStack)
	cout << "Non-Linked Check: This stack is eqivalent to the other stack" << endl;
	else
	cout << "Non-Linked Check: This stack is not eqivalent to the other stack" << endl;

	secondStack.push(6);

	if (firstStack == secondStack)
	cout << "Non-Linked Check: This stack is eqivalent to the other stack" << endl;
	else
	cout << "Non-Linked Check: This stack is not eqivalent to the other stack" << endl;

	/*
	linkedStackType<int> firstLStack;
	linkedStackType<int> secondLStack;
	

	firstLStack.push(1);
	firstLStack.push(2);
	firstLStack.push(3);
	firstLStack.push(4);
	firstLStack.push(5);

	secondLStack.push(1);
	secondLStack.push(2);
	secondLStack.push(3);
	secondLStack.push(4);
	secondLStack.push(5);

	

	if (firstLStack == secondLStack)
		cout << "Linked Check: This stack is eqivalent to the other stack" << endl;
	else
		cout << "Linked Check: This stack is not eqivalent to the other stack" << endl;

	secondLStack.push(5);

	if (firstLStack == secondLStack)
		cout << "Linked Check: This stack is eqivalent to the other stack" << endl;
	else
		cout << "Linked Check: This stack is not eqivalent to the other stack" << endl;


	*/

	return 0;
}
