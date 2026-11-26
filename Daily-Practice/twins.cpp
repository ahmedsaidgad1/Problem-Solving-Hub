#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, totalSum = 0;
    cin >> n;
    vector<int> vnum(n);
    for (int i = 0; i < vnum.size(); i++)
    {
        cin >> vnum[i];
        totalSum += vnum[i];
    }

    sort(vnum.rbegin(), vnum.rend());

    int mySum = 0, coinsCount = 0;

    for (int i = 0; i < n; i++)
    {
        mySum += vnum[i];
        coinsCount++;

        if (mySum > totalSum - mySum)
        {
            break;
        }
    }

    cout << coinsCount << endl;

    return 0;
}