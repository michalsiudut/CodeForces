#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> child;
    vector<int> results;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        child.push_back(tmp);
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (child[j] > child[j + 1])
            {
                int tmp;
                tmp = child[j];
                child[j] = child[j + 1];
                child[j + 1] = tmp;
            }
        }
    }*/
    int i = 0;
    int sum = 0;
    int h = n / 3;
    bool a = false, b = false, c = true;
    for (int k = 0; k < h; k++)
    {

        while (i < n)
        {

            if (child[i] == 1 && c)
            {
                child[i] = 4;
                results.push_back(i + 1);
                a = true;
                c = false;
                i = 0;
            }
            if (a)
            {
                if (child[i] == 2)
                {
                    child[i] = 4;
                    results.push_back(i + 1);
                    a = false;
                    b = true;
                    i = 0;
                }
            }
            if (b)
            {
                if (child[i] == 3)
                {
                    child[i] = 4;
                    results.push_back(i + 1);
                    sum++;
                    b = false;
                    i = 0;
                }
            }
            i++;
        }
        a = false, b = false, c = true;
        i = 0;
    }
    cout << sum << endl;
    n = 3 * sum; // idk dodalem to na koniec
    if (n % 3 == 0)
    {
        n = n + 1;
    }
    if (n % 3 == 2)
    {
        n = n - 1;
    }

    if (sum != 0)
    {
        for (int z = 1; z < n; z++)
        {

            cout << results[z - 1] << " ";
            if (z % 3 == 0)
            {
                cout << endl;
            }
        }
    }

    return 0;
}