#include <iostream>
#include <vector>

char decode(char tmp, char whatSide, int j)
{
    char g = '|';
    j = 0;
    char normal[31] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char toRight[31] = "wertyuioposdfghjkl;lxcvbnm,./.";
    char toLeft[31] = "wqwertyuiosasdfghjklxzxcvbnm,.";
    if (whatSide != 'R')
    {
        while (g != tmp)
        {
            g = normal[j];
            j++;
        }
        g = toRight[j - 1];
    }
    else
    {
        while (g != tmp)
        {
            g = normal[j];
            j++;
        }
        g = toLeft[j - 1];
    }

    return g;
}

int main()
{

    char whatSide;
    std::vector<char> decodedMessage;
    std::cin >> whatSide;
    std::string message;
    std::cin >> message;
    for (int i = 0; i < message.length(); i++)
    {
        decodedMessage.push_back(decode(message[i], whatSide, i));
    }
    for (int i = 0; i < decodedMessage.size(); i++)
    {
        std::cout << decodedMessage[i];
    }
    std::cout << "\n";

    return 0;
}