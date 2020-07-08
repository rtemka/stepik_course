#include <iostream>
using namespace std;

int base2_log(int x)
{
    int pow = 0;
    while (x >= 2)
    {
        pow++;
        x /= 2;
    }

    return pow;
}

int main()
{
    int tests = 0;

    cin >> tests;

    while (tests--)
    {
        int a = 0;
        cin >> a;
        cout << base2_log(a) << endl;
    }

    return 0;
}