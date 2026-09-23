#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
 
    while (t--) 
    {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
        int a[50];
        
        int maxVal = 0, maxPos = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > maxVal) 
            {
                
                maxVal = a[i];
                maxPos = i;
            }
        }
 
        if (maxPos != 0) 
        {
            swap(a[0], a[maxPos]);
        }
 
        int currentMax = 0, total = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] > currentMax) currentMax = a[i];
            total += currentMax;
        }
        cout << "Total: " << total << endl;
    }
    return 0;
}