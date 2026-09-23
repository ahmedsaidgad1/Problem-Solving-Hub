#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "Enter a number: ";
    cin >> a;


    if (a == int (a))
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "float" << endl;
    }
    
    return 0;
}