#include <iostream>

struct Cls
{
    Cls(char c, double d, int i) : c{c}, d{d}, i{i} {};

    void address_of_c()
    {
        std::cout << "value of c -> " << c << " |address of c -> ";
        std::cout << (int *)&c << std::endl;
    }
    void address_of_i()
    {
        std::cout << "value of i -> " << i << " |address of i -> ";
        std::cout << &i << std::endl;
    }
    void address_of_d()
    {
        std::cout << "value of d -> " << d << " |address of d -> ";
        std::cout << &d << std::endl;
    }

private:
    char c;
    double d;
    int i;
};

char &get_c(Cls &cls)
{
    char *c = (char *)(&cls);
    return *c;
}

static double d = 13;
double &get_d(Cls &cls)
{
    double *d = (double *)(&cls) + 1;
    return *d;
}

int &get_i(Cls &cls)
{
    int *i = (int *)(&cls) + 4;
    return *i;
}

int main()
{
    Cls c{'a', 12.0, 4};
    c.address_of_c();
    c.address_of_i();
    c.address_of_d();
    Cls &link = c;
    double &dd = get_d(link);
    dd = 14;
    c.address_of_d();
    int &ii = get_i(link);
    ii = 666;
    c.address_of_i();
    char &cc = get_c(link);
    cc = 'z';
    c.address_of_c();
    return 0;
}
