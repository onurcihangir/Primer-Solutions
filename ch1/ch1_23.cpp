#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    if (std::cin >> item1)
    {
        int count = 1;
        Sales_item item2;
        while (std::cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                ++count;
            } 
            else
            {
                std::cout << item1.isbn() << " " << count << std::endl;
                item1 = item2;
                count = 1;
            }  
        }
        std::cout << item2.isbn() << " " << count << std::endl;
    }
}