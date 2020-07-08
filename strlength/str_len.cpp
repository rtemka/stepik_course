#include <iostream>

unsigned strlen(const char *str)
{
    unsigned i = 0;
    while (str[i])
        i++;
    return i;
}

int main()
{
    const char *s = "Hellossss";

    unsigned len_s = strlen(s);
    std::cout << len_s << std::endl;
    std::cout << sizeof(*s) << std::endl;
}