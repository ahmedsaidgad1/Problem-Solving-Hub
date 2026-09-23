#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string num;
    cin >> num;

    int sum_first = 0, sum_last = 0;

    for (int i = 0; i < 3; i++)
    {
        sum_first += num[i] - '0';
        sum_last += num[i + 3] - '0';
    }

    if (sum_first == sum_last)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}