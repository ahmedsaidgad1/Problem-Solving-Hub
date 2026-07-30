#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        
        for (char &c : str)
        {
            c = tolower(c);
        }

        if (str == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}