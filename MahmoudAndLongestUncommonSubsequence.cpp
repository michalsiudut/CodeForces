#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string a, b;
    int results = 0;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
    }
    else if (a.length() > b.length())
    {
        cout << a.length() << endl;
    }
    else
    {

        cout << b.length() << endl;
    }
    return 0;
}