#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName, lastName;
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;

	string formatedName = lastName + ", " + firstName;
	cout << formatedName;

	return 0;
}