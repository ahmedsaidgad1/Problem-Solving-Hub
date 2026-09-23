#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int total_solved = 0; 

    for (int i = 0; i < n; i++) 
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya; 

        if (petya + vasya + tonya >= 2) 
        {
            total_solved++; 
        }
    }
    cout << total_solved << endl;

    return 0;
}