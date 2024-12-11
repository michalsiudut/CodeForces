#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tab[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> tab[i];
    }
    string name;
    cin >> name;
    int sum = 0;
    vector<int> numbers;

    for (int i = 0; i < name.length(); i++)
    {
        string name2;
        name2 = name[i];
        int tmp;
        tmp = stoi(name2);
        numbers.push_back(tmp);
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += tab[numbers[i] - 1];
    }

    cout << sum << endl;
    return 0;
}