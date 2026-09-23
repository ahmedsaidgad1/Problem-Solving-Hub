#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    vector<char> numbers;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '+')
        {
            numbers.push_back(str[i]);
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        
        if (i < numbers.size() - 1)
        {
            cout << "+";
        }
    }

    cout << endl;

    return 0;
}