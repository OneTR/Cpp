// Programmer Muhammet Mert Uyanýk
// Write a C++ program that prints all numbers between 1 and 100 which divided by a specified number taken from user.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Define the variables.
	int num;
	// Get a number from user between 1 and 100.
	cout << "Please enter a number between 1 and 100: ";
	cin >> num;
	// Check if the number matches the requirements.
	if(num > 0 && num <= 100)
	// The number determined by the user is multiplied by an increasing variable starting from 1, the product of which is less than or equal to 100.
		for(int x=1; x <= 100 && x * num <= 100; x++)
		cout << x * num << " ";
	// If not, shut the program.
	else
	cout << "The number '" << num << "' is out of the interval.";
	
	return 0;
}
