#include <iostream>
#include <cstdio>

struct Cls {
    Cls(char c, double d, int i) : c{c}, d{d}, i{i} {};

    void pointer_of_c() {
        std::cout << c << std::endl;
        std::cout << &c << std::endl;
    }
    void pointer_of_i() {
        std::cout << i << std::endl;
        std::cout << &i << std::endl;
    }
    void pointer_of_d() {
        std::cout << d << std::endl;
        std::cout << &d << std::endl;
    }
private:
    char c;
    double d;
    int i;
};

char &get_c(Cls &cls) {
    /* ... */
}

static double d = 13;
double &get_d(Cls &cls) {
    Cls * cp;
    cp = &cls;
    for (int i = 0; i < 25; ++i) {
        std::cout << i << " " << &(*(cp + i)) << std::endl; 
        cp = &cls;
    }
    return d;
}

int &get_i(Cls &cls) {
    /* ... */
}

int main()
{
    Cls c {'a', 10.0, 4};
    std::cout << sizeof(c) << std::endl;
    c.pointer_of_c();
    c.pointer_of_i();
    c.pointer_of_d();
    Cls & link = c;
    printf("%p == %p\n", &c, &link);
    double & dd = get_d(link);
    std::cout << dd << std::endl;
    return 0;
}
