#include <iostream>

using namespace std;

int main()
{
    int cakesNeeded, timeForCake, howManyCakes, timeForSecond;
    cin >> cakesNeeded >> timeForCake >> howManyCakes >> timeForSecond;

    int time1 = 0, time2 = 0;
    int cakesBaked = 0;
    while (cakesBaked < cakesNeeded)
    {
        cakesBaked += howManyCakes;
        time1 += timeForCake;
    }
    cakesBaked = 0;
    time2 += timeForSecond;
    int timeForCake2 = timeForCake;
    int i = 0;
    while (timeForSecond >= timeForCake2)
    {
        i++;
        timeForCake2 += timeForCake;
    }
    cakesBaked = howManyCakes * i;
    // cout << cakesBaked << endl;
    while (cakesBaked < cakesNeeded)
    {

        cakesBaked = cakesBaked + (2 * howManyCakes);
        time2 += timeForCake;
    }
    // cout << time1 << "   " << time2 << endl;
    if (time1 > time2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}