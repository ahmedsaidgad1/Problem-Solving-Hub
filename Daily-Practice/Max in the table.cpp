#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<long long>> grid(n, vector<long long>(n, 1));

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	}

	cout << grid[n - 1][n - 1];

	return 0;
}