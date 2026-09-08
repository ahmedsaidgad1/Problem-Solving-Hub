#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> soldiers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> soldiers[i];
    }

    int max_val = soldiers[0], min_val = soldiers[0];
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (soldiers[i] > max_val)
        {
            max_val = soldiers[i];
            max_idx = i;
        }
        if (soldiers[i] <= min_val)
        {
            min_val = soldiers[i];
            min_idx = i;
        }
    }

    int moves = max_idx + (n - 1 - min_idx);

    if (max_idx > min_idx)
    {
        moves--;
    }

    cout << moves << endl;

    return 0;
}