#include <iostream>

using namespace std;

int main()
{
    string colors, colors2;
    cin >> colors >> colors2;
    int sum = 0;

    for (int i = 0; i < colors2.length(); i++)
    {
        if (colors[sum] == colors2[i])
        {
            sum++;
        }
    }
    if (colors == colors2)
    {
        cout << sum << endl;
    }
    else
        cout << sum + 1 << endl;

    return 0;
}