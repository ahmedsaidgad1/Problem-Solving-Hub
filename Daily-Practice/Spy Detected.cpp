#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    int expected_num = 0;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == v[1])
        {
            expected_num = v[0];
        }
        else if (v[0] != v[1])
        {
            expected_num = v[2];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i] != expected_num)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}