#include <iostream>

using namespace std;

void reverse_seq()
{
    int n;
    cin >> n;
    if (n == 0)
        return;
    reverse_seq();
    cout << n << " ";
    return;
}

int main()
{
    reverse_seq();
    return 0;
}