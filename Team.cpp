#include <iostream>

using namespace std;

int main()
{
    int n;
    int j = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum >= 2)
        {
            j++;
        }
    }
    cout << j;

    return 0;
}