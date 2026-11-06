#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	long long result = 0;
	vector<char> v(n);
	for (int i = 0; i < (int)v.size(); i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < (int)v.size(); i++)
	{
		if (v[i] == 'V')
			result += 5;

		else if (v[i] == 'W')
			result += 2;


		else if (v[i] == 'X')
			i++;

		else if (v[i] == 'Y' && i + 1 < n)
		{
			char next_char = v[i + 1];
			v.push_back(next_char);
			i++;
		}

		else if (v[i] == 'Z')
		{
			if (i + 1 < (int)v.size())
			{

				if (v[i + 1] == 'V')
				{
					result /= 5;
					i++;
				}
				else if (v[i + 1] == 'W')
				{
					result /= 2;
					i++;
				}
			}
		}
	}

	cout << result << "\n";
	return 0;
}