#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        sum += x;
    }

    double average = sum / n;
    cout << setprecision(12) << fixed << average << endl;
    return 0;
}