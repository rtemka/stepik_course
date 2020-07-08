#include <iostream>

void strcat(char *to, const char *from)
{
    for (; *to; *to++)
        ;
    for (; *from; *from++)
    {
        *to++ = *from;
    }
    *to = '\0';
}

int main()
{
    char s1[12] = "Hello ";
    const char *s2 = "World";

    strcat(s1, s2);
    std::cout << s1 << std::endl;
}