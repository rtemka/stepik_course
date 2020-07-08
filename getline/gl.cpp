
#include <iostream>

char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *str2 = new char[new_size];
    for (int i = 0; i < size && i < new_size; i++)
    {
        str2[i] = str[i];
    }
    delete[] str;
    return str2;
}

char *getline()
{
    unsigned size = 16;
    char *str = new char[size];
    char c = '\0';
    str[0] = c;
    // int i = 0;
    // const char *str2 = "Hello World labc\n";
    // while (std::cin.get(c) && c != '\n')
    for (int i = 0; std::cin.get(c) && c != '\n'; i++)
    {
        if (i + 1 >= size)
        {
            str = resize(str, size, size * 2);
            size = size * 2;
        }
        str[i] = c;
        str[i + 1] = '\0';
    }
    return str;
}

int main()
{
    char *str3 = getline();
    std::cout << str3 << std::endl;
    delete[] str3;
}