#include <cstdio>

int power(int x, unsigned p)
{
    int answer;
    answer = x;
    if (p == 0)
        return 1;
    for (unsigned i = 1; i < p; i++)
    {
        answer *= x;
    }
    return answer;
}

int powerRec(int x, unsigned p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return x;

    return x * powerRec(x, p - 1);
}

int main()
{
    int x = 4;
    unsigned pow = 4;
    int pow_x = power(x, pow);

    printf("The numder %d in power of %d is %d", x, pow, pow_x);
}