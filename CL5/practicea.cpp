#include <iostream>
#include <string>
using namespace std;

int main()
{
	string website;
	cout << "Please enter a URL: ";
	cin >> website;

	string command;
	command = "ping " + website;

	system(command.c_str());

	return 0;
}