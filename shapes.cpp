// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main()
{

	// Variable declaration

	int choice;

	//Program title and description for the user

	cout << "MENU TEMPLATE with IF ELSE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - task #1" << endl;
	cout << "2 - task #2" << endl;
	cout << "3 - task #3" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}