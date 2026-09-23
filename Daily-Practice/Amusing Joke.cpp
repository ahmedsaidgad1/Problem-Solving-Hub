#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string guest, host, piled;
	cin >> guest >> host >> piled;
	string combined = guest + host;

	sort(combined.begin(), combined.end());
	sort(piled.begin(), piled.end());

	if (combined == piled)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}