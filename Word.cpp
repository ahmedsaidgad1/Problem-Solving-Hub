#include <iostream>
using namespace std;
int main()
{
    string str;
    int num_uppercase = 0;
    int num_lowercase = 0;
    cin >> str;
    for (char c : str)
    {
        if (isupper(c))
        {
            num_uppercase++;
        }
        else if (islower(c))
        {
            num_lowercase++;
        }
    }

    if (num_uppercase > num_lowercase)
    {
        for (char &c : str)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : str)
        {
            c = tolower(c);
        }
    }
    cout << str << endl;
    
    return 0;
}