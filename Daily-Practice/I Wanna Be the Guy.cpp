#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool passed[101] = {false};
    int p, q, level;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        passed[level] = true;
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        passed[level] = true;
    }

    bool Can_All_Pass = true;
    for (int i = 1; i <= n; i++)
    {
        if (passed[i] == false) 
        {
            Can_All_Pass = false;
            break;
        }
    }

    if (Can_All_Pass)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}