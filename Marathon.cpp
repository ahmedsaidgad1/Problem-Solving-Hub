#include <iostream>
using namespace std;

int main()
{
    int t;
    int a, b, c, d;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
            count++;
        if (a < c)
            count++;
        if (a < d)
            count++;
        cout << count << endl;
    }
}