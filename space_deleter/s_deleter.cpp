#include <iostream>
using namespace std;

int main()
{
    bool space_set = false;
    char c = '\0';
    while (cin.get(c))
    {
        if (c != ' ')
        {
            space_set = false;
        }
        else if (c == ' ' && !space_set)
        {
            space_set = true;
        }
        else
        {
            continue;
        }
        cout << c;
    }
    return 0;
}