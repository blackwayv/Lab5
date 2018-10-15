/*
Joshua Smith
COSC 2030
Lab 7
10/15/18
Lab5MyStack.h
*/
#pragma once

#include <stack>
#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <vector>

using std::stack;
using std::string;
using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

class MyStack {
public:
	MyStack() {}

	~MyStack() {}

	bool isEmpty()
	{
		return stack.size() == 0;
	}

	void push(char& c)
	{
		stack.push_back(c);
	}

	char pull() {
		char back = 0;
		back = stack.back();
		stack.pop_back();
		return back;
	}

private:
	list<char> stack;
};