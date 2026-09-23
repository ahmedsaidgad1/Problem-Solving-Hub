#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long ReversedNum = 0;
        int OriginalNum = x;
        while (x > 0)
        {
            int lastDigit;
            lastDigit = x % 10;
            ReversedNum = (ReversedNum * 10) + lastDigit;
            x /= 10;
        }
        return OriginalNum == ReversedNum;
    }
};

int main()
{
    Solution sol;
    int num;

    cout << "Enter the number: ";
    cin >> num;
    
    if (sol.isPalindrome(num))
        cout << "the number: " << num << " is palindrome." << endl;
    else 
        cout << "the number: " << num << " is not palindrome." << endl;
    
        return 0;
}