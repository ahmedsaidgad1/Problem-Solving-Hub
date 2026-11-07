#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int start = s.find('?');
    string params = s.substr(start + 1);

    for (int i = 0; i < (int)params.size(); i++)
    {

        if (params[i] == '=')
        {
            cout << ": ";
            i++;
            while (i < (int)params.size() && params[i] != '&')
            {
                cout << params[i];
                i++;
            }
            cout << "\n";
        }

        else
        {
            cout << params[i];
        }
    }

    return 0;
}