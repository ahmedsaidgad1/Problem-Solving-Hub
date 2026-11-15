#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int k, x, a, y, b;
	cin >> k >> x >> a >> y >> b;

	int ans = 0;

	if (x <= k)
	{
		ans = max(ans, a);
	}

	if (y <= k) {
		ans = max(ans, b);
	}

	if (x + y <= k)
	{
		ans = max(ans, a + b);
	}

	cout << ans << endl;

	return 0;
}