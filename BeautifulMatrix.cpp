#include <iostream>

using namespace std;

int main()
{
    int tab[5][5];
    int sum = 0;
    bool a = 0;
    int o, k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> tab[i][j];
            if (tab[i][j])
            {
                a = 1;
                o = abs(i - 2);
                k = abs(j - 2);
                sum = o + k;
                break;
            }
        }
    }
    cout << sum;

    return 0;
}