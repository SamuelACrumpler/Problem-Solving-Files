#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
Samuel Crumpler
CSCI 271-5865
Assignment 6
Due Date: 2016-11-17

Problem Statement: The client wants a program that parses the student data given via scores.dat
The program will go through the list of students, and check their scores by comparing it to the answer key at the top of the file
After the comparison is complete, the student's ID, Answers, Test Score, and Test Grade will be displayed



Possible Solution: Write a script that goes through each line of the file, then pull out the needed strings
After pulling the needed strings use them to fill arrays, then processed the needed data
Display data in an easy to read manner so the teacher has an understanding of what is going on.


*/

int main()
{
	//variables
	ifstream inData;
	string answers;
	string studentData[500];
	string studentID[500];
	string studentAnswers[500];
	int studentScore[500];
	char studentLetter[500];
	double studentGrade[500];
	int count = 0; // number of elements in array

	inData.open("scores.dat");
	//read answers
	getline(inData, answers);
	//retrieve student data
	while (!inData.eof()) {
		getline(inData, studentData[count++]);
		
	}
	count--;
	 //maintain last element
			 //close file stream
	inData.close();
	// use at to get a char.
	//for loop that goes through the array of students.
	for (int i = 0; i < 193; i++)
	{
		studentID[i] = studentData[i].substr(0, 8);
		studentAnswers[i] = studentData[i].substr(9, 29);
		studentScore[i] = 0;
		studentGrade[i] = 0;
	}

	for (int i = 0; i < 193; i++)
	{
		for (int g = 0; g < 20; g++)
		{
			if (studentAnswers[i].at(g) != 'T')
				studentScore[i] -= 1;
			else
				studentScore[i] += 2;
		}
	}

	for (int i = 0; i < 193; i++)
	{
		if (studentScore[i] < 0) {
			studentLetter[i] = 'F';
			studentGrade[i] = 0;
		}
		else
		{
			studentGrade[i] = (studentScore[i] / 20.0) * 100;
			if (studentGrade[i] > 89)
				studentLetter[i] = 'A';
			else if (studentGrade[i] > 79 && studentGrade[i] <= 89)
				studentLetter[i] = 'B';
			else if (studentGrade[i] > 69 && studentGrade[i] <= 79)
				studentLetter[i] = 'C';
			else if (studentGrade[i] > 59 && studentGrade[i] <= 69)
				studentLetter[i] = 'D';
			else
				studentLetter[i] = 'F';
		}

	}

	//output data read
	cout << answers << endl;
	cout << "number of students: " << count << endl;
	for (int index = 0; index < count; index++) {
		cout << "-----" << index + 1 << "-----" << endl;
		cout << "Student ID : " << studentID[index] << endl;
		cout << "Student Answers : " << studentAnswers[index] << endl;
		cout << "Student Score : " << studentScore[index] << endl;
		cout << "Student Percent : " << studentGrade[index] << "%" << endl;
		cout << "Student Letter Grade : " << studentLetter[index] << endl;
	}
	cout << endl;
}