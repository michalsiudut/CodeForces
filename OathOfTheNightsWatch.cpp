#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    int tmp;
    int result = 0;
    std::vector<int> num;
    for (int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        num.push_back(tmp);
    }
    int max = 0, min = 1000000001;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] != min && num[i] != max)
        {
            result++;
        }
    }
    std::cout << result << "\n";
    // co jest
    return 0;
}