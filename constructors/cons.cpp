#include <cstddef> // size_t
#include <cstring> // strlen, strcpy
#include <iostream>

struct String
{
    String(const char *str = "")
        : size{strlen(str)}
    {
        this->str = new char[size + 1];
        strcpy(this->str, str);
        this->str[size + 1] = 0;
    }

    String(size_t n, char c)
        : size{n}
    {
        this->str = new char[n + 1];
        for (size_t i = 0; i < n; i++)
        {
            this->str[i] = c;
            std::cout << this->str[i];
        }
        this->str[n] = 0;
        std::cout << std::endl;
    }

    void print()
    {
        std::cout << "Text: ";
        for (size_t i = 0; i < size; i++)
        {
            std::cout << this->str[i];
        }
        std::cout << std::endl;
        std::cout << "Size: " << size << std::endl;
    }

    void append(String &other)
    {
        this->print();
        other.print();
        size_t n_size = size + other.size + 1;
        char *buffer = new char[n_size];
        strcpy(buffer, this->str);
        strcpy(buffer + size, other.str);
        delete[] this->str;
        this->str = new char[n_size];
        strcpy(this->str, buffer);
        delete[] buffer;
        size = n_size - 1;
        this->print();
    }

    ~String()
    {
        delete[] this->str;
    }

    size_t size;
    char *str;
};

int main()
{
    String s{"Hello"};
    String s2{"Hello"};

    s.append(s2);
    std::cout << "Lalalalalaa" << std::endl;
}