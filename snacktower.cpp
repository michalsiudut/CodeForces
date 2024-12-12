#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, tmp, x, p;
    cin >> n;
    vector<int> num;
    vector<int> other;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }

    bool a = true;
    int m = n;
    for (int i = 0; i < n; i++)
    {
        other.push_back(num[i]);
        tmp = other.size();
        if (num[i] == m)
        {
            sort(other.begin(), other.end());
            x = m - 1;
            p = 0;
            for (int j = tmp - 1; j > -1; j--)
            {
                cout << other[j] << " ";
                p++;
                if (other[j - 1] != x && other[j - 1] != 0)
                {
                    a = false;
                    break;
                }
                x--;
            }
            if (tmp != 0)
            {
                if (!a)
                {
                    m = m - p;
                    for (int z = 0; z < p; z++)
                    {
                        other.erase(other.end() - 1);
                    }
                }
                else
                {
                    m = m - tmp;
                    other.clear();
                }
            }
            else
            {
                m = m - 1;
            }
            if (a)
            {
                other.clear();
            }
            cout << "\n";
        }
        else
        {
            cout << "\n";
        }
    }
    return 0;
}