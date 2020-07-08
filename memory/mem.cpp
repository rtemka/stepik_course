
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

int main()
{
    char *str = new char[10];
    for (int i = 0; i < 10; i++)
    {
        str[i] = 'h';
    }

    unsigned new_size = 2;
    unsigned size = 10;
    char *str3 = resize(str, size, new_size);
    delete[] str3;
}