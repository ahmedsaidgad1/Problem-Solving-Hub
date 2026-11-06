#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int freq[26] = { 0 };

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		char ch;
		cin >> ch;
		freq[ch - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		while (freq[i] > 0) 
		{
			cout << (char)(i + 'a');
			freq[i]--;
		}
	}

	cout << endl;

	return 0;
}