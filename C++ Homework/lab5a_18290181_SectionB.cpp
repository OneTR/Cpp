// Programmer Muhammet Mert Uyanýk
// Write a C++ program to compute the factorial of a positive number which is provided by the user.
#include <iostream>
using namespace std;
// Defining a function as "factorial".
void factorial ()
{
	// Defining the variables as long integers. "fctr" stands for factorial and equals to one at the beginning.
	long int num, fctr = 1;
	// Get a number from user.
	cout << "Please enter a number: ";
	cin >> num;
	// A long integer "i" is equal to one at the beginning either and increases one by one until become equal to user's number.
	for (long int i = 1; i <= num; i++)
	{
		fctr = fctr * i; // Then the integer "i" is multiplied by "fctr" over and over again. Therefore factorial is also increases from this and when the loop ends, it gives the result.
	}
	cout << "Factorial (" << num << ") is: " << fctr << endl;
}
// This function runs the "factorial" function.
int main ()
{
	factorial ();
	return 0;
}
