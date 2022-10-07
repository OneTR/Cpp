// Programmer Muhammet Mert Uyanýk
/* Write a program and function starU that takes two arguments: an integer width and an integer height. 
If width is less than 3 or height is less than 2, you should ask for inputs from user in the main function until you get valid width and height to be passed to the function starU. */

#include <iostream>
#include <string>
using namespace std;

// The function is defined with integers. This function will be used for print a "U" shape with stars.
void starU (int height, int width) 
{
	// This loop is checking whether a user enters values which are smaller than 2 (for height) and 3 (for width). If the values are smaller than 2 and 3, the program will ask until user enters proper values.
	while (height < 2 || width < 3)
	{
		if (height < 2)
		{
		cout << "Please enter the height of the shape: ";
		cin >> height;
		
		cout << endl;
		}
		if (width < 3)
		{
		cout << "Please enter the width of the shape: ";
		cin >> width;
		
		cout << endl;
		}
	}
	
	// This loop uses the height and the width which are taken from the user. The height value prints the left and the right corners of the shape by increasing the variable "i" and "j".
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        	// This statement checks the places that will be filled with stars or spaces by the values taken from the user.
            if (j == width-1 || i == height-1 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main ()
{
	// This function defines the variables in order to starU function work.
	int height, width;
	starU (height, width);
	
	return 0;
}
