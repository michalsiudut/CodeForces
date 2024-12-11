#include <iostream>

using namespace std;

int main()
{

    string tekst, tekst1;
    cin >> tekst >> tekst1;
    int sum1 = 0, sum2 = 0;
    int a = -1;
    for (int i = 0; i < tekst.length(); i++)
    {

        tekst[i] = tolower(tekst[i]);
        tekst1[i] = tolower(tekst1[i]);
        if (tekst[i] > tekst1[i])
        {
            a = 1;
            break;
        }
        else if (tekst[i] < tekst1[i])
        {
            a = 0;
            break;
        }
    }

    if (a == 1)
    {
        cout << 1;
    }
    else if (a == 0)
    {

        cout << -1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}