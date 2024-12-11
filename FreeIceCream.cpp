#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int n, x, alone = 0;
    cin >> n >> x;
    vector<char> signs;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        if (a == '+')
        {
            x += b;
        }
        else
        {
            if (b > x)
            {
                alone++;
                continue;
            }
            else
            {
                x -= b;
            }
        }
    }
    cout << x << " " << alone << endl;

    return 0;
}