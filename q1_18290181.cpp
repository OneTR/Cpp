// Programmer Muhammet Mert Uyanýk
/* Write a function that converts a number in 15th base to decimal number. The function should take a character arr as argument and return an integer as result. You should also write a main program that will ask user to enter up to 
10 numbers in 15th base (a character array). Store corresponding decimal numbers in an integer array. Finally display the output in a format. */
#include <iostream>
#include <string.h>
using namespace std;

int pentaBaseToDecimal (char arr[])
{
	// Defining the array and variables. "x" defines the length of array with the help of strlen, "decNum" defines the result of the conversion and "pow15Base" determines the digit of the number to be entered as the force of 15.
	int lngth = strlen(arr), x, decNum = 0, pow15Base = 1;
	x = lngth - 1;
	// Checks if the length is different than zero.
	while (x >= 0)
		{
			int value;
			if (arr[x] >= '0' && arr[x] <= '9') // This defines the numerals in the array, if the 15th base number that will be entered contains numerals.
			value = (int) arr[x] - '0';
			else // This defines the letters in the array as A = 10, B = 11, C = 12, D = 13 and E = 14, if the 15th base number that will be entered contains letters.
			value = (int) arr[x] - 'A' + 10;
			decNum = decNum + value * pow15Base; /* This converts the 15th base number to a decimal number by the digit determined as the force of 15 multiplies by the forces of 15, 
													and after applying this process to all the digits by using the "return decNum" loop, it sums all of them to find the result as the length of array decreases. */
			pow15Base = pow15Base * 15;
			x--;
		}
	return decNum;
}

int main ()
{
	// Takes the character array as arguments.
	char arr[10][100];
	int decNumbers[10];
    		cout << "Enter a 15th base number: ";
			for(int x = 0; x < 10; x++)
			{
            cin >> arr[x];
			decNumbers[x] = pentaBaseToDecimal(arr[x]);
        	}
    	cout<<"Number in 15th Base\t\tDecimal Number\n";
    	
    	for (int x = 0; x < 10; x++) // Display the numbers as listed like the exam announcement paper.
		{
        	cout << arr[x] << "\t\t\t\t" << decNumbers[x] << endl;
    	}
    return 0;
}

