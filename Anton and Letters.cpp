#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    set<char> letters;
    for (char c : str)
    {
        if (c >= 'a' && c <= 'z')
        {
            letters.insert(c);
        }
    }

    cout << letters.size() << endl;

    return 0;
}