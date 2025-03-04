#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> before, after;
    for (int i = 0; i < n; i++)
    {
        int tmp, tmp2;
        std::cin >> tmp >> tmp2;
        before.push_back(tmp);
        after.push_back(tmp2);
    }

    bool itsRaited = 1;

    for (int i = 0; i < n; i++)
    {
        if (before[i] != after[i])
        {
            itsRaited = 0;
            break;
        }
    }
    /*
    for (int i = 0; i < n; i++)
    {
        std::cout << before[i] << "   " << after[i] << "   " << itsRaited << "\n";
    }
    */

    if (!itsRaited)
    {
        std::cout << "rated" << "\n";
    }
    else
    {
        std::vector<int> sorted;
        sort(before.begin(), before.end());
        reverse(before.begin(), before.end());
        bool itsSorted = 1;
        for (int i = 0; i < n; i++)
        {
            if (before[i] != after[i])
            {
                itsSorted = 0;
            }
        }
        if (itsSorted)
        {
            std::cout << "maybe" << "\n";
        }
        else
        {
            std::cout << "unrated" << "\n";
        }
    }
}