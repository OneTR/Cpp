// Programmer Muhammet Mert Uyanýk
// Write a C++ program that inputs an integer containing only 0s and 1s (i.e., a “binary” integer) and prints its decimal equivalent.
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{	
	// Define the variables.
	long bin_Num, dec_Num = 0, remainder, exponent = 1;
	// Get a binary number from user.
	cout << "Please enter your binary number: ";
	cin >> bin_Num;
	// When converting the binary number to decimal, the number is multiplied by the digit value, starting from zero to 2, increasing it up to the digit value. The results are summed up and we have a decimal (10 based) number.
  		while (bin_Num != 0) 
  		{
   		remainder = bin_Num % 10;
   		dec_Num = dec_Num + exponent * remainder;
   		exponent = exponent * 2;
   		bin_Num = bin_Num / 10;
  		}
  	// Print the decimal number.
  	cout<<"Your decimal number is: " << dec_Num << endl;
	
  return 0;
}
