#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    int groups = 1;
    cin >> n;
    string prev, curr;

    cin >> prev;

    for (int i = 1; i < n; i++)
    {
        cin >> curr;
        if (curr != prev)
        {
            groups++;
            prev = curr;
        }
        else
            continue;
    }

    cout << groups << endl;

    return 0;
}