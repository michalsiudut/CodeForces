#include <iostream>

using namespace std;

int main()
{

    int y, w;
    cin >> y >> w;
    int d;
    if (y > w)
        d = 7 - y;
    else
        d = 7 - w;
    int sum = 6;
    if (d % 2 == 0)
    {
        d /= 2;
        sum /= 2;
    }
    else if (d % 3 == 0)
    {
        d /= 3;
        sum /= 3;
    }
    if (d == sum)
    {
        d = 1;
        sum = 1;
    }
    cout << d << "/" << sum << endl;

    return 0;
}