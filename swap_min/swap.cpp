#include <iostream>
#include <cstddef>
#include <stdlib.h>
#include <time.h>

int **create_array2d(size_t a, size_t b)
{
    int **m = new int *[a];
    m[0] = new int[a * b];
    for (size_t i = 1; i != a; ++i)
    {
        m[i] = m[i - 1] + b;
    }
    return m;
}

void free_array2d(int **m, size_t a, size_t b)
{
    delete[] m[0];
    delete[] m;
}

int **transpose(const int *const *m, unsigned rows, unsigned cols)
{
    int **b = create_array2d(cols, rows);
    for (size_t j = 0; j != cols; j++)
    {
        for (size_t i = 0; i != rows; i++)
        {
            b[j][i] = m[i][j];
            std::cout << b[j][i] << " ";
        }
        std::cout << std::endl;
    }
    return b;
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min_line{0};
    int min{m[0][0]};
    int *temp = m[0];
    for (size_t i = 0; i != rows; i++)
    {
        for (size_t j = 0; j != cols; j++)
        {
            if (m[i][j] < min)
            {
                min = m[i][j];
                min_line = i;
            }
        }
    }
    if (min_line > 0)
    {
        m[0] = m[min_line];
        m[min_line] = temp;
    }
    // int temp{0};
    // for (size_t j = 0; j != cols; j++)
    // {
    //     temp = m[min_line][j];
    //     m[min_line][j] = m[0][j];
    //     m[0][j] = temp;
    // }
}

int main()
{
    srand(time(NULL));
    int **m = create_array2d(4, 4);
    for (size_t i = 0; i != 4; i++)
    {
        for (size_t j = 0; j != 4; j++)
        {
            m[i][j] = rand() % 100 + 1;
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    swap_min(m, 4, 4);
    for (size_t i = 0; i != 4; i++)
    {
        for (size_t j = 0; j != 4; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    free_array2d(m, 4, 4);
}