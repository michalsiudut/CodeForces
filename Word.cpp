#include <iostream>

using namespace std;

int main()
{
    // sprawdzam czy dziala
    string word;
    cin >> word;
    int sumBig = 0, sumSmall = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] < 97)
        {

            sumBig++;
        }
        else
        {
            sumSmall++;
        }
    }
    if (sumSmall >= sumBig)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = toupper(word[i]);
        }
    }

    cout << word << endl;

    return 0;
}
