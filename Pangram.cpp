#include <iostream>
#include <vector>

int main()
{
    bool a;
    int n;
    std::vector<int> num;
    std::string name;
    std::cin >> n >> name;
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
    }
    for (int i = 97; i < 123; i++)
    {
        num.push_back(i);
    }
    for (int i = 0; i < name.length(); i++)
    {
        int tmp = name[i];
        for (int j = 0; j < num.size(); j++)
        {
            if (tmp == num[j])
            {
                num.erase(num.begin() + j);
            }
        }
    }
    if (num.size() == 0)
    {

        std::cout << "YES" << "\n";
    }
    else
    {
        std::cout << "NO" << "\n";
    }

    return 0;
}