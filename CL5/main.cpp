#include <iostream>
#include <string>
using namespace std;

void practice1a()
{
	string website;
	cout << "Please enter a URL: ";
	cin >> website;

	string command;
	command = "ping " + website;

	system(command.c_str());
}

void practice1b()
{
	string firstName, lastName;
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;

	string formatedName = lastName + ", " + firstName;
	cout << formatedName;
}

void practice1c()
{
	string note, filename;
	cout << "Enter a filename: ";
	cin >> filename;
	cin.ignore();

	cout << "What is your note?";
	getline(cin, note);

	string command = "echo \"" + note + "\" > " + filename;
	system(command.c_str());
}

void practice1d()
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
}

void practice2a()
{
	//Contains 2a and 2b. (2a modified)
	string names[5];
	names[0] = "Xia";
	names[1] = "Shang";
	names[2] = "Zhou";
	names[3] = "Qin";
	names[4] = "Han";

	int index = 0;
	int arraySize = 5;
	while (index < arraySize)
	{
		cout << names[index] << endl;
		index++;
	}
}

void practice2c()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	while (itemCount < arraySize)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	int counter = 0;
	while (counter < itemCount)
	{
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
		counter++;
	}
}

void practice3a()
{
	for (int i = 1; i <= 100; i += 5)
	{
		cout << i << endl;
	}
}

void practice3b()
{
	for (int i = 20; i > 0; i--)
	{
		cout << i << " ";
	}
}

void practice3c()
{
	string letters[5] = { "A", "B", "C", "D", "E" };

	for (int i = 0; i < 5; i++)
	{
		cout << letters[i] << " ";
	}
}

void practice3d()
{
	string items[3];
	float prices[3];
	int arraySize = 3;

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Enter item name: ";
		cin >> items[i];
		cout << "Enter price: ";
		cin >> prices[i];
	}

	for (int i = 0; i < arraySize; i++)
	{
		cout << "Item #" << i << ": " << items[i] << ", $" << prices[i] << endl;
	}
}

void practice3e()
{
	string cities[20];
	int arraySize = 20;
	cities[0] = "Lee's Summit";
	cities[1] = "Raytown";
	cities[2] = "Independence";
	cities[3] = "Belton";
	int itemCount = 4;

	for (int i = 0; i < itemCount; i++)
	{
		cout << "City: " << cities[i] << endl;
	}
}

int main()
{
	//practice2a();
	//practice2c();
	practice3e();

	return 0;
}