#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        long long minResult = 1e18;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                long long currentSum = a[i] + a[j] + j - i;

                if (currentSum < minResult)
                {
                    minResult = currentSum;
                }
            }
        }

        cout << minResult << "\n";
    }

    return 0;
}