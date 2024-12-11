#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i = 0;
    while (a <= b)
    {
        a *= 3;
        i++;
        b *= 2;
    }
    cout << i;
    return 0;
}