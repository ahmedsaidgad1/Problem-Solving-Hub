#include <iostream>
using namespace std;

int main()
{

    int n,
        Tetrahedron = 4,
        Cube = 6,
        Octahedron = 8,
        Dodecahedron = 12,
        Icosahedron = 20;

    cin >> n;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str == "Tetrahedron")
            sum += Tetrahedron;
        else if (str == "Cube")
            sum += Cube;
        else if (str == "Octahedron")
            sum += Octahedron;
        else if (str == "Dodecahedron")
            sum += Dodecahedron;
        else
            sum += Icosahedron;
    }

    cout << sum << endl;
    return 0;
}