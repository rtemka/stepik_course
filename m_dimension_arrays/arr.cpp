
#include <iostream>
#include <cstddef>

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

int main()
{
    int **m = create_array2d(5, 3);
    for (size_t i = 0; i != 5; i++)
    {
        for (size_t j = 0; j != 3; j++)
        {
            m[i][j] = j + i;
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    int **b = transpose(m, 5, 3);
    free_array2d(m, 5, 3);
    free_array2d(b, 3, 5);
}