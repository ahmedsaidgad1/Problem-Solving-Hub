#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;

	string s;
	cin >> s;


	if (s[a] != '-')
	{
		cout << "No\n";
		return 0;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (i == a) continue;

		if (!isdigit(s[i]))
		{
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";

	return 0;
}