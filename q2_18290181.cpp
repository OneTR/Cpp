// Programmer Muhammet Mert Uyanýk
/* Write a program that stores first "n" prime numbers in a two-dimensional integer array. You should ask user to input row and column values of two-dimensional array. You should also write a function "isPrimeNumber" to 
check whether a number is a prime number or not. Finally display the two dimensional array in a pretty form. */
#include <iostream>
using namespace std;

bool isPrimeNumber (int i)
{
   int num;
   
   // Check the "i" is equal to 1. Since 1 is not a prime number, the loop will continue until i is different than 1.
   if (i == 1)
   return false;
  
   // Run a loop from number 2 as long as number is little than i/2.
   for (num = 2; num <= i / 2; num++)
   {
       // Check if any "num" is completely divisible by "i".
       if (i % num == 0)
       // If yes, return false to find a prime number.
       return false;
   }
   // If no, then a prime number is found and continue to the main function.
   return true;
}

int main()
{
   int row, clm;
   
   // Get the inputs as rows and columns from user.
   cout << "Enter the number of rows: ";
   cin >> row;
   cout << "Enter the number of columns: ";
   cin >> clm;
   
   int arr[row][clm], num, j;
   int i = 1;
   // Fills the array with prime numbers.
   
   for(num = 0; num < row; num++)
   {
       for(j = 0; j < clm;)
       {
           if(isPrimeNumber (i))
           {
               arr[num][j] = i;
               j++;
           }
           i++;
       }
   }
  
   // Display the array.
   cout << endl << "The prime numbers in the array are: " << endl;
   // Places a space between two prime numbers on a row in the array, when the row ends, it moves the numbers to a one lower column.
   for(num = 0; num < row; num++)
   {
       for(j = 0; j < clm; j++)
       {
           cout << arr[num][j] << " ";
       }
       cout << endl;
   }
   
   return 0;
}
