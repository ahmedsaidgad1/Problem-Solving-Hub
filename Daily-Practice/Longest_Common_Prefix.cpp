#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];
        string result = "";

        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
            {
                break;
            }
            result += first[i];
        }

        return result;
    }
};

int main()
{
    Solution sol;
    int Size;

    cout << "Enter number of words: ";
    cin >> Size;

    vector<string> strs(Size);
    cout << "Enter the words: ";
    for (int i = 0; i < Size; i++)
    {
        cin >> strs[i];
    }

    string LCP = sol.longestCommonPrefix(strs);

    if (LCP.empty())
    {
        cout << "No common. " << endl;
    }
    else
    {
        cout << "Longest Common Prefix: \"" << LCP << "\"" << endl;
    }

    return 0;
}