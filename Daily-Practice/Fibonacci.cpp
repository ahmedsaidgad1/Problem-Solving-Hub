#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;

    double num = (pow(phi, n - 1) - pow(psi, n - 1)) / sqrt(5);

    long long ans = round(num);

    cout << ans << endl;

    return 0;
}