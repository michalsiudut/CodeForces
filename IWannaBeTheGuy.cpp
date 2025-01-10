#include <iostream>
#include <vector>
#include <set>

int main()
{
    int n;
    int m = 0;
    std::cin >> n;
    std::cin.ignore();
    std::set<int> player;
    std::string e, e1;
    getline(std::cin, e);
    getline(std::cin, e1);
    std::string c = e + ' ' + e1;
    int sum = 0;
    for (int i = 0; i < c.length(); i += 2)
    {
        // std::cout << (int)c[i] - 48 << "  " << (int)c[i + 1] - 48 << "\n";
        int tmp = (int)c[i] - 48;
        if (tmp > 0 && (int)c[i + 1] - 48 >= 0)
        {
            if (tmp > 0 && (int)c[i + 2] - 48 >= 0)
            {

                std::string a = std::string(1, c[i]) + std::string(1, c[i + 1]) + std::string(1, c[i + 2]);
                tmp = stoi(a);
                i++;
            }
            else
            {
                std::string a = std::string(1, c[i]) + std::string(1, c[i + 1]);
                tmp = stoi(a);
                i++;
            }
        }
        player.insert(tmp);
    }
    /*
        for (auto i = player.begin(); i != player.end(); i++)
        {
            std::cout << *i << " "
        }
        std::cout << "\n";
    */
    for (auto i = player.begin(); i != player.end(); i++)
    {
        sum += *i;
    }
    // co jest nie tak?
    for (int i = 1; i < n + 1; i++)
    {
        m += i;
    }
    // std::cout << m << " " << sum << "\n";
    if (sum == m)
    {
        std::cout << "I become the guy.\n";
    }
    else
    {
        std::cout << "Oh, my keyboard!\n";
    }

    return 0;
}