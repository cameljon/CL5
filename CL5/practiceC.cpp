#include <iostream>
#include <string>
using namespace std;

int main()
{
	string note, filename;
	cout << "Enter a filename: ";
	cin >> filename;
	cin.ignore();

	cout << "What is your note?";
	getline(cin, note);
	
	string command = "echo \"" + note + "\" > " + filename;
	system(command.c_str());

	return 0;
}