// Programmer Muhammet Mert Uyanýk
/* Write a function that takes radiuses r1(a), r2(b), and initial a(area) or c(circumference) (which one to calculate) of an ellipse as parameters, 
makes necessary calculations and returns area or circumference according to choice specified in arguments. */

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
using namespace std;

// This function calculates the area of an ellipse by getting radius values from user.
void calculateEllipseArea ()
{
	double r1, r2, A;
	
	cout << "Please enter the first radius of ellipse: ";
	cin >> r1;
	cout << "Please enter the second radius of ellipse: ";
	cin >> r2;
	// Area is calculated by multiplying both radiuses and the pi number. The pi number is defined in cmath library and takes the value from there if it is included in the program.
	A = M_PI * r1 * r2;
	
	cout << endl << "The area of your ellipse is: " << A << endl;
}
// And this function calculates the circumference of an ellipse by getting radius values from user.
void calculateEllipseCircumference ()
{
	double r1, r2, C;
	
	cout << "Please enter the first radius of ellipse: ";
	cin >> r1;
	cout << "Please enter the second radius of ellipse: ";
	cin >> r2;
	/* Circumference is calculated by multiplying the pi number multiplied with two, with the square root of half of sum of both radiuses' square. 
	The pi number is defined in cmath library and takes the value from there if it is included in the program. */
	C = 2 * M_PI * sqrt ((pow (r1, 2) + pow (r2, 2)) / 2);
	
	cout << endl << "The circumference of your ellipse is: " << C << endl;
}

int main()
{
	string input;
	// This function checks the user's choice of calculating the area or circumference by using the string that defined above.
	while (input != "A" && input != "a" && input != "C" && input != "c")
	{
		cout << "Write A for area or C for circumference: ";
		cin >> input;
	}
	
	if (input == "A" || input == "a")
	{
		calculateEllipseArea ();
	}
	else if (input == "C" || input == "c")
	{
		calculateEllipseCircumference ();
	}
	
	return 0;
}
