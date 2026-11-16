#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	string target = "hello";
	int counter = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == target[counter]) {
			counter++;
		}
		if (counter == 5)
		{
			break;
		}
	}

	if (counter == 5) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}