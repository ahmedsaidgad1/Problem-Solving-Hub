#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; i++) 
		{
			int currMax = a[i];
			for (int j = i; j < n; j++) 
			{
				currMax = max(currMax, a[j]);
				cout << currMax << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}