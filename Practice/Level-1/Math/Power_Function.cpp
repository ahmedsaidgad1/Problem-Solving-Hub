#include<iostream>
using namespace std;
int sum(int num, int power)
{
	int result = 1;
	for (int i = 0;i < power;i++)
	{
		result = result * num;
	}
	return result;
}

int read_number(int& num, int& power)
{
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter the power: ";
	cin >> power;
	return num, power;
}
int main()
{
	int num, power;
	read_number(num, power);
	cout << "The result is: " << sum(num, power) << endl;
	return 0;
}