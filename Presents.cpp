#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int results[101];
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }
    for (int i = 1; i < n + 1; i++)
    {
        results[num[i - 1] - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << results[i] << " ";
    }
    cout << endl;

    return 0;
}