#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<char> ends;
    getline(cin, word);
    for (int i = 0; i < word.length(); i++)
    {
        if (i % 2 == 0)
        {
            ends.push_back(word[i]);
        }
    }
    int n = ends.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ends[j] > ends[j + 1])
            {
                char tmp;
                tmp = ends[j];
                ends[j] = ends[j + 1];
                ends[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << ends[i] << "+";
        else
            cout << ends[i] << endl;
    }

    return 0;
}