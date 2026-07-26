#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int r = 1; r <= n; r++)
    {
        if (r % 2 != 0)
        {
            for (int c = 1; c <= m; c++)
            {
                cout << "#";
            }
        }
        else
        {
            if (r % 4 == 2)
            {
                for (int c = 1; c < m; c++) cout << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int c = 1; c < m; c++) cout << ".";
            }
        }
        
        cout << endl;
    }

    return 0;
}