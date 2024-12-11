#include <iostream>
#include <vector>

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
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                tmp = abs(num[i] - num[j]);
                if (najm == 0)
                    najm = tmp;
                if (tmp > najw)
                    najw = tmp;
                if (tmp < najm)
                    najm = tmp;
            }
        }
        cout << najm << " " << najw << endl;
        najw = 0;
        najm = 0;
    }
    return 0;
}