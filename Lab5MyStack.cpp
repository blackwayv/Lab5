/*
Joshua Smith
COSC 2030
Lab 7
10/15/18
Lab5MyStack.cpp
*/

#include "Lab5MyStack.h"

string stringReversal1(string input) {
	stack<char> reversal;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		reversal.push(input.at(i));
	}
	input.clear();
	for (int i = 0; i < size; i++) {
		input.push_back(reversal.top());
		reversal.pop();
	}
	return input;
}

string stringReversal2(string input) {
	vector<char> reversal;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		reversal.push_back(input.at(i));
	}
	input.clear();
	for (int i = size - 1; i >= 0; i--) {
		input.push_back(reversal.at(i));
	}
	return input;
}

string stringReversal3(string input) {
	list<char> reversal;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		reversal.push_back(input.at(i));
	}
	input.clear();
	for (int i = size - 1; i >= 0; i--) {
		input.push_back(reversal.back());
		reversal.pop_back();
	}
	return input;
}

string stringReversal4(string input) {
	MyStack reversal;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		reversal.push(input.at(i));
	}
	input.clear();
	for (int i = size - 1; i >= 0; i--) {
		input.push_back(reversal.pull());
	}
	return input;
}