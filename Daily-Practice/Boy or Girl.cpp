#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cin >> user_name;

    int freq[26] = {0};

    for (int i = 0; i < user_name.length(); i++)
    {
        freq[user_name[i] - 'a'] = 1;
    }

    int distinct_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            distinct_count++;
        }
    }

    if (distinct_count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}