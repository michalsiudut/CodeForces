#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int wyjazdowe[31];
    int domowe[31];

    for (int i = 0; i < n; i++)
    {
        cin >> domowe[i] >> wyjazdowe[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
            {
                break;
            }
            else if (domowe[i] == wyjazdowe[j])
            {
                sum++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
            {
                break;
            }
            else if (domowe[j] == wyjazdowe[i])
            {
                sum++;
            }
        }
    }

    cout << sum << endl;
    return 0;
}