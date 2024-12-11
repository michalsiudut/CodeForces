#include <iostream>

using namespace std;

int main()
{

    int n;
    int sum = 0;
    cin >> n;
    int nothing = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == -1)
        {
            if (sum == 0)
            {
                nothing++;
            }
            else
            {
                sum--;
            }
        }
        else
        {
            sum += tmp;
        }
    }

    cout << nothing << endl;
    return 0;
}