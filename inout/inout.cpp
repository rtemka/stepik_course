#include <iostream>
using namespace std;

int main()
{
    int tests = 0;

    cin >> tests;

    while (tests > 0)
    {
        int x = 0;
        int y = 0;
        cin >> x >> y;
        cout << (x + y) << endl;
        tests--;
    }

    return 0;
}