#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[101];

    for (int i = 1; i <= n; i++)
    {
        int recip;
        cin >> recip;
        arr[recip] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}