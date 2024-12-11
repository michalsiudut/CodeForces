#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    string name2 = "a";
    int sum = 0;
    name = name2 + name;
    for (int i = 0; i < name.length() - 1; i++)
    {
        int tmp = (int)name[i];
        int tmp2 = (int)name[i + 1];
        int eq = abs(tmp - tmp2);
        if (eq > 13)
        {
            sum += (26 - eq);
        }
        else
        {
            sum += eq;
        }
    }
    cout << sum << endl;

    return 0;
}