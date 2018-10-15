/*
Joshua Smith
COSC 2030
Lab 7
10/15/18
Lab5Driver.cpp
*/

#include "Lab5MyStack.h"

int main() {
	string input;
	string temp;
	cout << "Enter a word or short string of characters: ";
	cin >> input;

	temp = stringReversal1(input);
	cout << temp << endl;
	temp = stringReversal2(input);
	cout << temp << endl;
	temp = stringReversal3(input);
	cout << temp << endl;
	temp = stringReversal4(input);
	cout << temp << endl;

	system("pause");
	return 0;
}