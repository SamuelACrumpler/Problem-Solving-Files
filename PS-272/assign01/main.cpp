/*
Samuel Crumpler
CSCI 272-5527
Assign01
Due Date 2/3/2017

Problem Statement
Allow user to input the following: The amount of dice to roll, and the desired sum

When the rolling is complete the following data should be displayed: The amount the desired sum was rolled. And the sum's probability

Solution
Take in the input from the user using COUT and CIN statements.

Run a loop that will run until it reaches the desired amount of rolls.

Display the amount of times the dice were rolled, display the amount of times the user got their desired sum, and the probablity of that sum.
*/


#include <iostream>
#include <string>
#include "die.h"

using namespace std;
int getDiceSum();

int main() {
	int diceNum = 0;
	int intDesiredSum = 10;
	int intRollAmount = 100;
	int intRollSum = 10;
	int intMatches = 0;
	int intTimesRolled = 0;

	do {
		cout << "Enter your desired sum. (Sum must be between 10 and 60)" << endl;
		cin >> intDesiredSum;
	} while (intDesiredSum < 10 || intDesiredSum > 60);

	cout << "Enter the amount of times you want to roll the dice to achieve the desired sum. :" << endl;
	cin >> intRollAmount;

	cout << getDiceSum() << endl;
	for (int i = 0; i < intRollAmount; i++) {
		if (intRollSum == intMatches)
			intMatches += 1;
		intRollSum = getDiceSum();
		cout << "Roll Sum: " << intRollSum << endl;
		cout << "Amount Rolled: " << i << endl;
		intTimesRolled = i;
		intRollSum = 0;
	}
	//Function for getting the probability would have gone here.
	cout << "The amount of times you got your desired sum: " << intMatches << endl;
	cout << "Final Roll Sum: " << intRollSum << endl;
	cout << "Final Amount Rolled: " << intTimesRolled+1 << endl;
	
	
	/*
	do {
		for (int i = 0; i > 9; i++) {//Loop for rolling dice, then adding that to the sum.
			dice[i].roll();			
			intRollSum += dice[i].getNum();
		}
		intTimesRolled = 1;
		int intRollSumCheck = intRollSum;
		int intRollSum = 0;
		cout << "Roll Sum: " << intRollSumCheck << endl;
		cout << "Roll Times Sum: " << intTimesRolled << endl;
		
	} while (intRollSumCheck != intDesiredSum || intRollAmount == intTimesRolled);
	*/

	return 0;
}

int getDiceSum() {
	int intFuncDieSum = 0;
	die dice[10];
	for (int i = 0; i < 9; i++) {//Loop for rolling dice, then adding that to the sum.
		dice[i].roll();
		intFuncDieSum += dice[i].getNum();
	}
	return  intFuncDieSum;
}