#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string num;
        int counter = 0;
        cin >> num;

        for (int j = 0; j < num.length(); j++)
        {
            if (num[j] != '0')
            {
                counter++;
            }
        }

        cout << counter << endl;

        for (int j = 0; j < num.length(); j++)
        {
            if (num[j] != '0')
            {
                cout << num[j];
                for (int k = 0; k < num.length() - 1 - j; k++)
                {
                    cout << '0';
                }
                cout << " ";
            }
        }
        cout << endl;
    }
}