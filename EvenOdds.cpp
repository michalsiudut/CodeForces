#include <iostream>

int main()
{
    long long int n, k;
    std::cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
            std::cout << 2 * k - 1 << "\n";
        else
            std::cout << 2 * (k - n / 2) << "\n";
    }
    else
    {
        if (k <= n / 2 + 1)
            std::cout << 2 * k - 1 << "\n";
        else
            std::cout << 2 * (k - n / 2 - 1) << "\n";
    }

    return 0;
}