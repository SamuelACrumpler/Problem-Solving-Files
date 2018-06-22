/*
Samuel crumpler
CSCI 271-5865
Assignment 3
Due Date: October 9th, 2016

Problem Statement: User needs to be able to insert dimensions of the paper, the point size of the font, the margins,
and if the paper is double spaced or not.

Problem Solution: Take in the input and apply the proper math in order to figure out how many lines can appear on
the paper along with how many characters can be displayed on the paper while taking into account.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{ //Main Start
	int num; // stores the random variable

	int guess; // stores the user input

	int diff; //Stores the difference of the user's input

	int count = 0; //Keeps count of wrong answers

	bool isGuessed; // the control for the loop

	srand(time(0));
	num = rand() % 100;

	isGuessed = false;
	while (!isGuessed)
	{//isGuessed While Loop

		cout << "Enter an integer greater than or equal to 0 and less than 100: ";
		cin >> guess;
		diff = num - guess;
		diff = abs(diff);
		cout << endl;
		if (count == 5) {
			cout << "You ran out of guesses!";
			break;
		}
		else if (diff == 0)
		{// guess = num 
			cout << "You guess the correct number." << endl;
			isGuessed = true;
		}// guess = num end
		else if (diff > 0 && diff < 15)
		{
			cout << "Your guess needs to be a little lower. \n Guess again!" << endl;
			count += 1;
		}
		else if (diff >= 15 && diff < 30)
		{
			cout << "Your guess needs to be lower. \n Guess again!" << endl;
			count += 1;
		}
		else if (diff >= 30 && diff < 50)
		{
			cout << "Your guess needs to be much lower \n Guess again!" << endl;
			count += 1;
		}
		else if (diff >= 50)
		{
			cout << "your guess is much higher than the number" << endl;
			count += 1;
		}
	}//isGuessed While Loop End
	return 0;
} // Main end