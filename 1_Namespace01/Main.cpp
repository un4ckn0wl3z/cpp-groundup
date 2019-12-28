#include <iostream>

// this is a comment

/*
This is
multiple line
commment
*/

using namespace std;

int main()
{
	int favorite_number; // this is where my favorite number is stored

	cout << "Enter your favorite number between 1 and 100: ";
	cin >> favorite_number;

	cout << "Amazing!! That my favorite number too!" << endl;
	cout << "No really!! " << favorite_number << " is my favorite number" << endl;


	return 0;

}