#include <iostream>
#include <string>

using namespace std;

int main()
{

    string num;
    cin >> num;
    bool is_Palindrome = true;
    int n = num.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (num[i] != num[n - 1 - i])
        {
            is_Palindrome = false;
            break;
        }
    }

    cout << (is_Palindrome ? "YES" : "NO") << "\n";

    return 0;
}