#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence, searchFor;
	sentence = "Why bother with subroutines when you can type so fast?";

	cout << "What do search for?: ";
	getline(cin, searchFor);

	int foundPosition = sentence.find(searchFor);
	if (foundPosition != string::npos)
	{
		cout << "Found at " << foundPosition << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	return 0;
}