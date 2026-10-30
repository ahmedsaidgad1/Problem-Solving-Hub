#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool is_a_permutation = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            is_a_permutation = false;
            break;
        }
    }

    cout << (is_a_permutation ? "yes" : "no") << endl;

    return 0;
}