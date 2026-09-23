#include<iostream>
using namespace std;
const int SIZE_OF_ARRAY = 5;
int main()
{
int numbers[SIZE_OF_ARRAY];
cout << "Enter " << SIZE_OF_ARRAY << " numbers: \n";
/* Storing 5 numbers entered by user in an array using for loop. */
for (int i = 0; i < SIZE_OF_ARRAY; i++)
{
cin >> numbers[i]; // referring to an element using variable i
}
cout << "First number: " << numbers[0] << endl;//first element of an array is numbers[0]
cout << "Last number: " << numbers[SIZE_OF_ARRAY - 1] << endl;//last element of an array is
numbers[4];
return 0;
}