#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{

    char x;
    cout << "Enter a character: ";
    cin >> x;

    if (isupper(x))
    {
        cout << char(towlower(x));
    }
    else
    {
        cout << char(toupper(x));
    }
    cout << endl;
    return 0;   
}