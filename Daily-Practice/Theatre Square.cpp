#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    long long count_n = ceil(n / a);
    long long count_m = ceil(m / a);

    long long total_flagstones = count_n * count_m;

    cout << total_flagstones << endl;

    return 0;
}