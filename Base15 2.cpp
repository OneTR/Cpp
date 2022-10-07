#include <iostream>
#include <string.h>

using namespace std;

/*converting string to value*/
int value(char c)
{
if (c >= '0' && c <= '9')
return (int)c - '0';
else
return (int)c - 'A' + 10;
}
/* Function to convert a number from base '15'
to decimal */

int toDeci(char *str)
{
int len = strlen(str);
int power = 1; // Initialize power of base
int num = 0; // Initialize result
int i;

for (i = len - 1; i >= 0; i--)
{
// A digit in input number must be
// less than number's base
if (value(str[i]) >= 15)
{
cout << ("Invalid Number");
return -1;
}

num += value(str[i]) * power;
power = power * 15;
}

return num;
}


/*main function */
int main()
{
/*character array*/
char base15Numbers[10][10];
int decimalNumbers[10];

cout<<"Enter 10 numbers in 15th base"<<endl;

for (int i=0;i<10;i++){

cin>>base15Numbers[i];
}

for (int i=0;i<10;i++){

decimalNumbers[i] = toDeci(base15Numbers[i]);
}
cout<<"Number in 15th Base Decimal Number"<<endl;

for (int i=0;i<10;i++){
cout<<base15Numbers[i]<<" "<<decimalNumbers[i]<<endl;
}

return 0;
}
