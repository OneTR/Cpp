// Programmer Muhammet Mert Uyanýk
// The objective is to write a C++ program that reads three integers from the user and compute the smallest and the largest of those integers.
#include <iostream>
using namespace std;

int main()
{
	// Define the variables.
	int num1, num2, num3;
	int smallest, largest;
	// Get three numbers from user.
	cout << "Please enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	// Assign the "num1" as "smallest" and "largest" variables in order to compare the numbers successfully.
	smallest = num1;
	largest = num1;
	// Compare the numbers.
	if (num2 >= largest)
	largest = num2;
	if (num3 >= largest)
	largest = num3;
	if (num2 <= smallest)
	smallest = num2;
	if (num3 <= smallest)
	smallest = num3;
	// Display the result.
	cout << "The smallest number is: " << smallest << "\nThe largest number is: " << largest << endl;
	
	return 0;
}
