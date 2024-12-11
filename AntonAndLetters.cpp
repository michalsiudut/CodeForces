#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    set<char> allLetters;
    char tmp;
    char helper;
    cin >> helper;
    while (helper != '}')
    {
        cin >> tmp;
        if (tmp == '}')
        {
            break;
        }
        cin >> helper;
        allLetters.insert(tmp);
    }
    cout << allLetters.size() << endl;
    return 0;
}