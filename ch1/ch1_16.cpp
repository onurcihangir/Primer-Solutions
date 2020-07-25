#include <iostream>

int main() {
    std::cout << "Enter numbers:" << std::endl;
    int sum = 0, val = 0, i = 0;
    while (i < 5)
    {
        std::cin >> val;
        sum += val;
        ++i;
    }
    std::cout << "The sum of numbers is " << sum << std::endl;
    return 0;
}