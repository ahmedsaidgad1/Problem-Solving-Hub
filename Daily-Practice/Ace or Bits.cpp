#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char a, b, c;
	cin >> a >> b >> c;
	if (b == '=')
	{
		if (a == c)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else if (b == '<')
	{
		if (a < c)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else if (b == '>')
	{
		if (a > c)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}