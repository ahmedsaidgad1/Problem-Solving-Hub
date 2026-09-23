#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;

    int Remaining_Time = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++) 
    {
        int Time_For_Problem = 5 * i;
        
        if (Remaining_Time >= Time_For_Problem) 
        {
            Remaining_Time -= Time_For_Problem;
            solved++;
        } 
        else 
        {
            break;
        }
    }

    cout << solved <<endl;

    return 0;
}