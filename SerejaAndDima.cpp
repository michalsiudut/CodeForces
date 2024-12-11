#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    int vecSize = numbers.size();
    bool a = true;
    int j = n - 1;
    while (vecSize != 0)
    {
        if (a)
        {
            if (numbers[0] >= numbers[j])
            {
                sum1 += numbers[0];
                numbers.erase(numbers.begin());
            }
            else
            {
                sum1 += numbers[j];
                numbers.erase(numbers.begin() + j);
            }
            a = false;
        }
        else
        {
            if (numbers[0] >= numbers[j])
            {
                sum2 += numbers[0];
                numbers.erase(numbers.begin());
            }
            else
            {
                sum2 += numbers[j];
                numbers.erase(numbers.begin() + j);
            }
            a = true;
        }
        j--;
        vecSize = numbers.size();
        /*  for (int k = 0; k < vecSize; k++)
          {
              cout << numbers[k] << "  ";
          }*/
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}