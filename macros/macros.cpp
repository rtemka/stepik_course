#include <cstdio>

#define MAX(x, y, r)           \
    {                          \
        int a1 = (x);          \
        int b1 = (y);          \
        r = a1 > b1 ? a1 : b1; \
    }

int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    MAX(a, b, c); // теперь c равно 20
    printf("The max of numbers %d, %d is %d\n", a, b, c);
    MAX(a += b, b, c); // теперь a = с = 30
    printf("The max of numbers %d, %d is %d\n", a, b, c);
    MAX(a, b *= b, c); // теперь a = с = 30
    printf("The max of numbers %d, %d is %d\n", a, b, c);
}