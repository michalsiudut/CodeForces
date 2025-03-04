#include <iostream>
#include <vector>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> goals;
    std::string tmp, st1, st2;
    for (int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        goals.push_back(tmp);
    }
    int first = 0, second = 0;
    std::string firstTeam = goals[0];
    first++;
    std::string secondTeam;
    for (int i = 1; i < goals.size(); i++)
    {
        if (firstTeam == goals[i])
        {
            first++;
        }
        else
        {
            secondTeam = goals[i];
            second++;
        }
    }

    if (first > second)
    {
        // std::cout << first << " " << second << "\n";
        std::cout << firstTeam << "\n";
    }
    else
    {
        // std::cout << first << " " << second << "\n";
        std::cout << secondTeam << "\n";
    }
}