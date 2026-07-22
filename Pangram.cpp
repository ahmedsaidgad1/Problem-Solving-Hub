#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int visited[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char c = tolower(str[i]);
        int index = c - 'a';

        visited[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (visited[i] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}