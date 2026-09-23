#include <iostream>
using namespace std;

void solution(int n, int m)
{
    int Domino_Size = 2;
    int Board_Size = n * m;
    int result = Board_Size / Domino_Size;
    cout << result << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;
    solution(n, m);
    return 0;
}