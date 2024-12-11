#include <iostream>

using namespace std;

int main()
{
    int n;
    int tab[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tab[i] > tab[j])
            {
                int tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }

    return 0;
}