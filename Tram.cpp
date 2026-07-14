#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int current = 0;
    int maxx = 0;

    for (int i = 0; i < num; i++)
    {
        int a, b;
        cin >> a >> b;

        current -= a;
        current += b;

        maxx = max(maxx, current);
    }

    cout << maxx << endl;

    return 0;
}