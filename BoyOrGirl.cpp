#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    string kopie;
    bool a = true;
    int sum = 0;

    for (int i = 0; i < name.length(); i++)
    {

        for (int j = 0; j < kopie.length() + 1; j++)
        {
            if (name[i] == kopie[j])
            {
                a = false;
            }
        }
        kopie = kopie + name[i];
        if (a)
        {
            sum++;
        }
        a = true;
    }
    if (sum % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {

        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}