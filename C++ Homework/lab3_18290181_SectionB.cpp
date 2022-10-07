// Programmer Muhammet Mert Uyanýk
/* 
Write a C++ program that prints the following pattern: 
The program should include a function that takes a parameter and prints the pattern. 
In main function, the program should check whether a negative input is entered or not and it calls the function according to entered integer. 
If a negative value is entered, the program terminates.
*/

#include <iostream>
using namespace std;

int main()
{
	// Define the variables.
    int input, a, b;
    // Get a number from the user as an input.
    cout << "Please enter a positive number: ";
    cin >> input;
	// Check if the number is positive or negative. The number should not be equal to zero, either. If it is positive, start the loop.
    if (input > 0)
        for(a = 0; a < input; a++)
		{
    		for(b = 0; b <= a; b++)
			{
    			cout << "*";
    		}
    		cout << "\n";
		}
	// If the number is negative, terminate the program.
	else 
    cout << "The number '" << input << "' is less than or equal to zero, try again.";
    // Do the second loop.
		for(a = 0; a < input; a++)
		{
			for(b = 0; b < input-(a+1); b++)
			{
				cout << " ";
			}
			for(b = 0; b <= a; b++)
			{
    			cout << "*";
    		}
    		cout << endl;
		}
   return 0;
}
