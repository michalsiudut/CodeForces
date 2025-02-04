#include <iostream>
#include <vector>
#include <set>

int main()
{
    int n;
    std::cin >> n;
    int tmp2 = 0;
    int sum = 0;
    while (n != 0)
    {
        sum += n;
        n--;
    }

    std::set<int> player1, player2;
    int tmp;
    int m = 0;
    for (int i = 0; i < 2; i++)
    {
        std::cin >> tmp;
        for (int i = 0; i < tmp; i++)
        {
            std::cin >> tmp2;
            player1.insert(tmp2);
        }
    }
    for (int i = 0; i < player1.size(); i++)
    {
        auto it = std::next(player1.begin(), i);
        m += *it;
    }
    for (int i = 0; i < player2.size(); i++)
    {
        auto it = std::next(player2.begin(), i);
        m += *it;
    }

    if (sum == m)
    {
        std::cout << "I become the guy.\n";
        // std::cout << "m:" << m << "sum" << sum << "\n";
    }
    else
    {
        std::cout << "Oh, my keyboard!\n";
        // std::cout << "m:" << m << "sum" << sum << "\n";
    }

    return 0;
}