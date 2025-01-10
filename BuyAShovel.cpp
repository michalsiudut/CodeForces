#include <iostream>

using namespace std;

int main()
{

    int k, r;
    cin >> k >> r;
    int sum = 1;
    int tmp = k;
    while (k % 10 != r && k % 10 != 0)
    {
        sum++;
        k += tmp;
    }
    cout << sum << endl;
    return 0;
}