#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<vector<char>> a(n, vector<char>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	bool check = false;

	int x, y;
	cin >> x >> y;
	x--;
	y--;

	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (i == x && j == y) continue;

			if (i >= 0 && i < n && j >= 0 && j < m)
			{
				if (a[i][j] != 'x')
				{
					cout << "no" << endl;
					return 0;
				}
			}
		}
	}

	cout << "yes" << endl;
	return 0;
}