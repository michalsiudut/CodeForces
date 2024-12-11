#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string stones;
    cin >> stones;
    int sum = 0;
    for (int i = 0; i < stones.length() - 1; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            sum++;
        }
        else
        {
            continue;
        }
    }
    cout << sum << endl;

    return 0;
}