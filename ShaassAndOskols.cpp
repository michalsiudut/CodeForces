#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> oskols;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        oskols.push_back(tmp);
    }

    int shoots;
    cin >> shoots;
    for (int i = 0; i < shoots; i++)
    {
        int x, y;
        cin >> x >> y;
        int onLeft, onRight;
        onRight = oskols[x - 1] - y;
        onLeft = oskols[x - 1] - (onRight + 1);
        oskols[x - 1] = 0;
        if (x == 1)
        {
            oskols[x] += onRight;
        }
        else if (x == n)
        {
            oskols[x - 2] += onLeft;
        }
        else
        {
            oskols[x - 2] += onLeft;
            oskols[x] += onRight;
        }
    }
    for (int i = 0; i < oskols.size(); i++)
    {
        cout << oskols[i] << endl;
    }

    return 0;
}