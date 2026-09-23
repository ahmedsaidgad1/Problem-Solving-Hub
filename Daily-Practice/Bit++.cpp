#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num_operation;
    int x = 0;
    string operation = "";
    
    cin >> num_operation;
    
    for (int i = 0; i < num_operation; i++)
    {
        cin >> operation;
        if (operation[1] == '+') 
        {
            x++;
        }
        else 
        {
            x--;
        }
    }
    
    cout << x;
    return 0;
}