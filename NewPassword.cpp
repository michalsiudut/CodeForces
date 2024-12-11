#include <iostream>
#include <vector>
#include <set>
#include <random>

using namespace std;

int main()
{
    set<char> password;
    vector<char> trash;
    int n, k;
    cin >> n >> k;
    while (password.size() != k)
    {
        char tmp;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(97, 122);
        tmp = dis(gen);
        password.insert(tmp);
        trash.push_back(tmp);
    }
    int sum = n;
    do
    {
        for (char value : password)
        {
            cout << value;
        }
        sum = sum - k;
    } while (sum >= k);
    int count = 0;
    for (char ch : password)
    {
        if (count >= sum)
            break;
        cout << ch;
        ++count;
    }

    cout << endl;
    return 0;
}