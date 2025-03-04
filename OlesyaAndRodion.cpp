#include <iostream>
#include <math.h>

int main()
{

    int t, n;
    std::cin >> n >> t;
    if (n != 1 || t != 10)
    {
        std::cout << t;
        if (t == 10)
        {
            n--;
        }
        for (int i = 0; i < n - 1; i++)
        {
            std::cout << 0;
        }
    }
    else
    {

        std::cout << -1;
    }
    std::cout << "\n";
}