/*
Samuel Crumpler
CSCI 272-5527
Assign04
04-06-2017

assign04.cpp

Problem Statement (as you understand it)


Solution (Your steps in solving the problem)

*/

#include <string>
#include "linkedList.h"
#include "unorderedLinkedList.h"

using namespace std;

int main() {
	unorderedLinkedList<int> myList;
	unorderedLinkedList<int> otherList;

	myList.insertLast(34);
	myList.insertLast(65);
	myList.insertLast(18);
	myList.insertLast(39);
	myList.insertLast(27);
	myList.insertLast(89);
	myList.insertLast(12);

	cout << "Undivided First List: ";
	myList.print();
	cout << endl;

	myList.divideAt(otherList, 18);

	cout << "Divided First List: ";
	myList.print();
	cout << endl;

	cout << "Divided Second List: ";
	otherList.print();
		cout << endl;

	cout << "Divided First List: ";
	myList.print();
	cout << endl;


	cout << "---------------" << endl;

	unorderedLinkedList<int> newList;
	unorderedLinkedList<int> list1;
	unorderedLinkedList<int> list2;

	list1.insertLast(2);
	list1.insertLast(6);
	list1.insertLast(7);

	list2.insertLast(3);
	list2.insertLast(5);
	list2.insertLast(8);

	newList.mergeLists(list2, list1);

	cout << "First List: ";
	list1.print();
	cout << endl;

	cout << "Second List: ";
	list2.print();
	cout << endl;

	cout << "New List: ";
	newList.print();
	cout << endl;


	return 0;
}