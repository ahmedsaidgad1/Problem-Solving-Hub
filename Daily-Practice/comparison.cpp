#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int n = str.length();

	if (n <= 1)
	{
		cout << str << endl;
		return 0;
	}

	string min_String = str;

	for (int i = 1; i < n; i++)
	{
		string part1 = str.substr(0, i);
		string part2 = str.substr(i);

		sort(part1.begin(), part1.end());
		sort(part2.begin(), part2.end());

		string combined = part1 + part2;

		if (combined < min_String)
		{
			min_String = combined;
		}
	}
	cout << min_String << endl;
	return 0;
}