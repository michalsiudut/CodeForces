#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string word;
    string word2;
    vector<string> allWords;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            int tm = word.length() - 1;
            word2 = word[0];
            string tmp = to_string(tm - 1);
            word2 += tmp;
            word2 += word[tm];
            allWords.push_back(word2);
        }
        else
            allWords.push_back(word);
    }

    for (int i = 0; i < allWords.size(); i++)
    {
        cout << allWords[i] << endl;
    }

    return 0;
}