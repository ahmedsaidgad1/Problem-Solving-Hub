#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;


    int Maxx = min({a, b, c});
    int Minn = max({a, b, c});


    cout << "The smallest number is: " << Maxx << endl;
    cout << "The largest number is: " << Minn << endl;

    return 0;
}