#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> oranges;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        oranges.push_back(tmp);
    }
    int i = 0;
    int helper = n;
    int sum = 0;
    int tmp = 0;
    while (helper != 0)
    {
        if (oranges[i] <= b)
        {
            tmp += oranges[i];
            if (tmp > d)
            {
                sum++;
                tmp = 0;
            }
        }
        i++;
        helper--;
    }
    cout << sum << endl;
    return 0;
}