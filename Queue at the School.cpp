#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int num, t;
    cin >> num >> t;

    string str;
    cin >> str;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                swap(str[j], str[j + 1]);
                j++;
            }
        }
    }

    cout << str << endl;

    return 0;
}