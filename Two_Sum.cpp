#include <iostream>
#include <vector>
#include <string>
using namespace std;

class clsSolution
{
public:
    vector<int> Two_Sum(vector<int> &num, int target)
    {
        for (int i = 0; i < num.size(); i++)
        {
            for (int j = i + 1; j < num.size(); j++)
            {
                if (num[i] + num[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    clsSolution sol;
    vector<int> num;
    int Size, target;

    cout << "Enter number of elements: ";
    cin >> Size;

    cout << "\nEnter the elements: ";
    for (int i = 0; i < Size; i++)
    {
        int element;
        cin >> element;
        num.push_back(element);
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = sol.Two_Sum(num, target);

    if (result.size() == 2)
    {
        cout << "[" << result[0] << "," << result[1] << "]" << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}