#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    unsigned rem = a > b ? a % b : b % a;

    return rem == 0 ? (a < b ? a : b) : gcd((a < b ? a : b), rem);
}

int foo(int n)
{
    cout << "I am foo" << endl;
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}

int main()
{
    unsigned a = 15;
    unsigned b = 28;

    auto res = gcd(a, b);

    cout << res << endl;

    int x = foo(3);
}