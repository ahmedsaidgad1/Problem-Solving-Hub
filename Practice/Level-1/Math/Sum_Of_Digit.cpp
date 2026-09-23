#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    cout << "Enter a three-digit number: ";
    cin >> s;
    int sum = 0;

    for (int i = 0; i < 3; ++i)
    {
        sum += s[i] - '0';
    }
    
    cout << "The sum of the digits is: ";
    cout << sum;
    cout << endl;

    return 0;
}