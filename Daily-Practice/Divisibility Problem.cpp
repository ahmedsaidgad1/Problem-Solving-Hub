#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        int rem = a % b;
        cout << (rem == 0 ? 0 : b - rem) << endl;
    }
    return 0;
}