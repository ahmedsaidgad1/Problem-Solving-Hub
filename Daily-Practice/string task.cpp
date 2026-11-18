#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void result(string str)
{
    string word = "";

    for (char c : str)
    {
        char lower_c = tolower(c);
        if (lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u' && lower_c != 'y')
        {
            word += lower_c;
        }
    }

    for (int i = 0; i < word.length(); i++)
    {
        cout << "." << word[i];
    }
}

int main()
{
    string str;
    cin >> str;
    result(str);
    return 0;
}