#include <iostream>

void rotate(int a[], unsigned size, int shift)
{
    shift = size > shift ? shift : shift % size;
    for (int i = 0; i < shift; i++)
    {
        int first = a[0];
        for (int j = 0; j < size; j++)
        {
            a[j] = a[j + 1];
        }
        a[size - 1] = first;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    int shift = 3;

    for (int i = 0; i < size; i++)
    {
        std::cout << a[i];
    }
    std::cout << std::endl;

    rotate(a, size, shift);

    for (int i = 0; i < size; i++)
    {
        std::cout << a[i];
    }
    std::cout << std::endl;
}