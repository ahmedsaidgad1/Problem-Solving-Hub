#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
    if (b == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else
        {
        cout << a / b << endl;
        break;
    }
    return 0;
}