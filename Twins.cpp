#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    int n, sum = 0;
    std::cin >> n;
    std::vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        sum += tmp;
        num.push_back(tmp);
    }
    sum = sum / 2;
    int mine = 0;
    int numOfCoins = 0;
    std::sort(num.begin(), num.end());
    for (int i = 0; i < n; i++)
    {
        if (mine > sum)
        {
            break;
        }
        mine += num[i];
        numOfCoins++;
    }
    std::sort(num.begin(), num.end(), std::greater<int>());
    mine = 0;
    int numOfCoins2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (mine > sum)
        {
            break;
        }
        mine += num[i];
        numOfCoins2++;
    }
    if (numOfCoins2 > numOfCoins)
    {

        std::cout << numOfCoins << "\n";
    }
    else
    {
        std::cout << numOfCoins2 << "\n";
    }
    return 0;
}