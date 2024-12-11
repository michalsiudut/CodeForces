#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string name;
    cin >> name;
    int Anton = 0, Danik = 0;
    for (int i = 0; i < a; i++)
    {
        if (name[i] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if (Danik > Anton)
    {
        cout << "Danik";
    }
    else if (Danik < Anton)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}