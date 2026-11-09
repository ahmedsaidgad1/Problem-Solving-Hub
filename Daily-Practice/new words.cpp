#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (char c : s)
    {
        char ch = tolower(c);
        if (ch == 'e')
            e++;
        else if (ch == 'g')
            g++;
        else if (ch == 'y')
            y++;
        else if (ch == 'p')
            p++;
        else if (ch == 't')
            t++;
    }

    int ans = min({e, g, y, p, t});

    cout << ans << "\n";

    return 0;
}