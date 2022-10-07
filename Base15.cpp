#include<iostream>
#include<string.h>
using namespace std;

int convert_into_decimal(char arr[])
{
   int decimal_number=0;
   int pow_of_15=1;
   for(int i=strlen(arr)-1;i>=0;i--)
   {
       int value=0;
       if(arr[i]>='0' && arr[i]<='9')
           value=arr[i]-'0';
       else if(arr[i]>='A' && arr[i]<='E')
           value=arr[i]-'A'+10;
       else
           return -1;
       decimal_number=decimal_number+value*pow_of_15;
       pow_of_15*=15;
   }
   return decimal_number;
}

int main()
{
	char* hex;
	int x;
    char arr1[10]=;
    cout << "Decimal value of 15th base " << arr1 << " is: " << convert_into_decimal(arr1) << endl;
  
    char arr2[10]={'A','9','2','6'};
    cout << "Decimal value of 15th base " << arr2 << " is: " << convert_into_decimal(arr2) << endl;
    int __cdecl strcmp (const char *arr1, const char *arr2)
    
    return 0;
}
