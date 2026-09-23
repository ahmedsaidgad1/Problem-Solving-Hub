#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[4];
    cout << "Enter 4 numbers: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
 
    sort(arr, arr + 4);

    cout << "Sorted numbers: ";
    
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}