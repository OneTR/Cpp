// Programmer Muhammet Mert Uyanýk
// Write a C++ program to print a butterfly shape with stars.
#include <iostream>
using namespace std;

void starButterfly (int input, int i, int j, int space)
{
    for(j = input; j > i; j--) // Upper side of butterfly.
    {
        cout << "*";
    }
    
    space = i * 2 - 1;
    while(space >= 0) // The space that between the left side and the right side of the butterfly.
    {
        cout << " ";
        space--;
    }
    
    for(j = i; j < input; j++) // Lower side of the butterfly.
    {
        cout << "*";
    }
    
    cout << endl;
}

int main ()
{
    // Defining the variables as integers.
	int input, i, j, space;
    
	// Receiving a number from user.
    cout << "Enter a number: ";
    cin >> input;

	// Left half of the butterfly.
    for(i = input; i > 0; i--) 
    // Shows how many times the following codes will work e.g. if 6 was entered, "i" becomes equal to 6. Each time the code runs, integer "i" decreases and the loop ends when "i" becomes equal to 0.
    {
        if (input % 2 == 0) 
		{ // This is for if an even number is entered e.g. 8
            if (i % 2 != 0) 
			{
                // Since an even number is entered, it cannot give a floating number in the first run. Therefore, it is set to be that the remainder is not equal to 0.
                starButterfly (input, i, j, space);
            }
        }
		else 
		{ // This is for if an even number is entered e.g. 7
            if (i % 2 == 0) 
			{
                // Since an odd number is entered, it cannot give an integer number in the first run. Therefore, it is set to be that the remainder is equal to 0.
                starButterfly (input, i, j, space);
            }
        }
    }
	
	// Middle line of butterfly.
    for(i = input; i > 0; i--)
    {
        cout<<"*";
    }
    
    for(i = 1; i <= input; i++)
    {
        cout << "*";
    }
    
    cout << endl;

    // Right half of the star butterfly.
    for(i=1; i < input; i++)
    {
        if (input % 2 == 0) 
		{
            if (i % 2 != 0) 
			{
                starButterfly (input, i, j, space);
            }
        }
		else 
		{
            if (i % 2 == 0) 
			{
                starButterfly (input, i, j, space);
            }
        }
    }

    return 0;
}
