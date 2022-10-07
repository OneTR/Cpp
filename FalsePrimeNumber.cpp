#include <iostream>

using namespace std;

bool checkprime(int x)
{
// Corner case
if (x <= 1)
return false;
  
// Check from 2 to n-1
for (int i = 2; i < x; i++)
if (x % i == 0)
return false;
  
return true;
}

int main()
{
int n,i,j,k,r,c,count;
bool result;
cout << "Enter 'n' for first n prime numbers: ";
cin >> n;
  
while(1)
{
cout << "\nEnter rows and columns for a 2D matrix: ";
cin >> r >> c;
if((r*c) >= n) // matrix must be able to hold all prime numbers
break;
else
cout << "\nMatrix cannot hold the numbers. Reenter value of rows and columns!";
}
  
int array[r][c]; // The 2D matrix that will hold the prime numbers
  
  
i = 0; j = 0;count = 0;
for(k=1;k<=n;k++)
{
result = checkprime(k);
if(result == true)
{
count++; //keep track of how many prime numbers found till now.
if(j<c) // check if j has a value greater than column value
{
array[i][j] = k;
j++;
}
else // if j > c then we need to move to next row. So incremnt i and make j = 0
{
i = i + 1;
j = 0;
array[i][j] = k;
}
}
}
  
//print the array
k = 0;
cout <<"\nThe number of prime numbers from 1 to "<< n <<" are :" <<count;
cout << "\nThe prime numbers are: \n";
for( i = 0; i < r; i++)
for( j = 0; j < c; j++)
{
if(k < count) // k here keeps track that we print only values of matrix that
{ // are occupied.
cout << " " <<array[i][j];
k++;
}
}
  
return 0;
}
