#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int max_remaining = n;
    vector<int> other;

    for (int i = 0; i < n; i++)
    {
        other.push_back(num[i]);

        if (num[i] == max_remaining)
        {
            sort(other.begin(), other.end(), greater<int>());

            bool is_valid_sequence = true;
            for (int j = 1; j < other.size(); ++j)
            {
                if (other[j - 1] - other[j] != 1)
                {
                    is_valid_sequence = false;
                    break;
                }
            }

            for (int j = other.size() - 1; j >= 0; --j)
            {
                cout << other[j] << " ";
            }
            cout << endl;

            if (!is_valid_sequence)
            {
                max_remaining -= other.size();
                other.clear();
            }
            else
            {
                max_remaining -= other.size();
                other.resize(0); // Clear efficiently
            }
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}