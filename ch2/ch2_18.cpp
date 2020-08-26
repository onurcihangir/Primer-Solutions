#include <iostream>

int main()
{
    int a = 10;
    int *ap = &a;

    *ap = 3;
    
    std::cout << a << " " << *ap << std::endl;

    a = 4;

    std::cout << a << " " << *ap << std::endl;

    return 0;
}