#include <iostream>
#include <vector>
// przeszlo bo zlozonosc O(n) a nie O(n^2) jak w tym drugim pliku
using namespace std;

int main()
{
    vector<int> num;
    int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }
    tmp = 0;
    int najw = 0, najm = 0;
    for (int i = 0; i < n; i++)
    {
        int k = abs(num[i] - num[0]);
        int z = abs(num[i] - num[n - 1]);
        if (k > z)
        {
            najw = k;
        }
        else
        {
            najw = z;
        }
        if (i == 0)
        {
            najm = abs(num[0] - num[1]);
        }
        else if (i == n - 1)
        {
            najm = abs(num[i] - num[i - 1]);
        }
        else
        {
            int x = abs(num[i] - num[i - 1]);
            int y = abs(num[i] - num[i + 1]);
            if (x > y)
            {
                najm = y;
            }
            else
            {
                najm = x;
            }
        }

        cout << najm << " " << najw << endl;
        najw = 0;
        najm = 0;
    }
    return 0;
}