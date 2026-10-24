#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long ansA, ansB, ansC;

        if (a > b && a > c)
        {
            ansA = 0;
        }
        else if (b >= c)
        {
            ansA = b - a + 1;
        }
        else
        {
            ansA = c - a + 1;
        }

        if (b > a && b > c)
        {
            ansB = 0; 
        }
        else if (a >= c)
        {
            ansB = a - b + 1;
        }
        else
        {
            ansB = c - b + 1;
        }

        if (c > a && c > b)
        {
            ansC = 0;
        }
        else if (a >= b)
        {
            ansC = a - c + 1;
        }
        else
        {
            ansC = b - c + 1;
        }

        cout << ansA << " " << ansB << " " << ansC << "\n";
    }

    return 0;
}