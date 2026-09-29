#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        double s, v;
        cin >> s >> v;
        double d = (s * v * 1000) / 60.0;
        cout << fixed << setprecision(6) << d << "\n";
    }

    return 0;
}

/* السرعه =  المسافه / الزمن

المسافه = السرعه * الزمن

المسافه = s * v * 1000 / 60


*/