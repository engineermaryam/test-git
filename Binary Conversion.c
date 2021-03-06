/*  C++ Program to convert Decimal Number to Binary using functions */

#include <iostream>
#include <cmath>
using namespace std;

long long convertDecimalToBinary(int);

int main()
{
    int n, binaryNumber;

    cout << "\nEnter any decimal number :: ";
    cin >> n;
    binaryNumber = convertDecimalToBinary(n);

    cout <<"\n [ " << n << " ] in decimal = [ " << binaryNumber << " ] in binary" << endl ;
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
         n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
