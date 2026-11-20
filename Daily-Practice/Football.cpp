#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counter = 1;
    string str;
    cin >> str;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            counter++;
            if (counter == 7)
            {
                break;
            }
        }
        else
        {
            counter = 1;
        }
    }

    cout << (counter == 7 ? "YES" : "NO");
    return 0;
}