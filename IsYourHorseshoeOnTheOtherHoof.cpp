#include <iostream>

using namespace std;

int main()
{

    int colors[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> colors[i];
    }
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        int j = i + 1;
        int p = 3 - i;
        while (p > 0)
        {
            if (colors[i] == colors[j])
            {
                sum++;
                break;
            }
            p--;
            j++;
        }
    }
    cout << sum << endl;

    return 0;
}