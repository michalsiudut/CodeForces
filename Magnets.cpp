#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> numbers;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        numbers.push_back(num);
    }
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != numbers[i + 1])
        {
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}