#pragma once
#include <iostream>

using namespace std;

class menu {
public:
	void printMenu();		//Declare function to display menu to user

protected:
	int choice = 0;			//Variable that holds user menu choice
};