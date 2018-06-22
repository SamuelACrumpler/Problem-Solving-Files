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
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	//User input variables
	double dblPaperLength = 0.0;
	double dblPaperWidth = 0.0;
	double dblMarTop = 0.0;
	double dblMarBot = 0.0;
	double dblMarLeft = 0.0;
	double dblMarRight = 0.0;
	double dblPointSize = 0.0;
	bool blnSpace = false;
	//Backend Variables
	double dblLineLen = 0.0;
	double dblLineWid = 0.0;
	double dblCharLen = 0.0;
	double dblTotalLines = 0.0;
	//Request Information from user
	cout << "Please input the length and width of the paper in decimal format. (i.e: 11.5): " << endl;
	cin >> dblPaperLength >> dblPaperWidth;
	cout << "Please input top, bottom, left and right margins in decimal format. (i.e: 1.1): " << endl;
	cin >> dblMarTop >> dblMarBot >> dblMarLeft >> dblMarRight;
	cout << "Please insert the point size of the font in decimal format. (i.e: 24.5): " << endl;
	cin >> dblPointSize;
	cout << "Is your paper going to be double spaced, or single space. Enter 0 for single space, and 1 for double space" << endl;
	cin >> blnSpace;
	//Perform Math operations.
	//Calculation to find the active printing space for the user.
	dblLineLen = (dblPaperLength * 72) - (dblMarTop * dblMarBot * 72);
	dblLineWid = (dblPaperWidth * 72) - (dblMarRight * dblMarLeft * 72);
	//Find how many characters can fit in the active printing space
	dblCharLen = dblLineLen / dblPointSize;
	dblTotalLines = dblLineWid / dblPointSize;
	//Round down to prevent the program from displaying an amount that is impossible
	dblCharLen = floor(dblCharLen);
	if (blnSpace == false) {
		dblTotalLines = floor(dblTotalLines);
	}
	else {
		dblTotalLines = floor(dblTotalLines / 2);
	}
	//display to the user the number of characters per line
	cout << "The amount of characters per line is: " << dblCharLen << endl;
	cout << "The amount of lines you can have on the page is: " << dblTotalLines << endl;

	return 0;
}