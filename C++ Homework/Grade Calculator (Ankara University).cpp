// Programmer Muhammet Mert Uyanýk
// The objective is to write a C++ program that reads midterm, lab and final grades and decides whether the student passed or failed.
#include <iostream>
using namespace std;

int main()
{
	// Define the variables.
	double midterm, lab, final, grade;
	// Get his/her grades from student.
	cout << "Please enter your grades in order of (Midterm, Lab, Final): ";
	cin >> midterm >> lab >> final;
	// Calculate the student's grade and display it.
	grade = (midterm * 0.3) + (lab * 0.25) + (final * 0.55);
	cout << "Your grade is: " << grade;
	// Display the letter grades.
	if (grade > 100)
	cout << "\nYour letter grade is: A+";
	else if (grade >= 90)
	cout << "\nYour letter grade is: A";
	else if (grade >= 85)
	cout << "\nYour letter grade is: B1";
	else if (grade >= 80)
	cout << "\nYour letter grade is: B2";
	else if (grade >= 75)
	cout << "\nYour letter grade is: B3";
	else if (grade >= 70)
	cout << "\nYour letter grade is: C1";
	else if (grade >= 65)
	cout << "\nYour letter grade is: C2";
	else if (grade >= 60)
	cout << "\nYour letter grade is: C3";
	else if (grade >= 50)
	cout << "\nYour letter grade is: F1";
	else
	cout << "\nYour letter grade is: F2";
	// Display the student's state.
	if ( grade >= 60 )
	cout << "\nYou passed. Congratulations!";
	else 
	{
		cout << "\nYou failed.";
		cout << "\nYou have to take this course again." << endl;
	}
	
	return 0;
}
