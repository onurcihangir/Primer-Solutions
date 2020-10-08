#include <iostream>
#include "Sales_data.h"

void ex1_20()
{
    Sales_data item;
    double price = 0;
    while (std::cin >> item.bookNo >> item.units_sold >> price) 
    {
        item.revenue = item.units_sold * price;
        std::cout << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    }
}

int ex1_21()
{
    Sales_data d1, d2;
    double price = 0;
    if (std::cin >> d1.bookNo >> d1.units_sold >> price)
    {
        d1.revenue = d1.units_sold * price;
        if (std::cin >> d2.bookNo >> d2.units_sold >> price)
        {
            d2.revenue = d2.units_sold * price;
            if (d1.bookNo == d2.bookNo)
            {
                int totalSold = d1.units_sold + d2.units_sold;
                double totalRevenue = d1.revenue + d2.revenue;
                std::cout << d1.bookNo << " " << totalSold << " " << totalRevenue;
            } 
            else 
            {
                std::cerr << "Book No. must be same!!" << std::endl;
                return -1;
            }
        }
        else 
        {
            std::cerr << "No data for book 2" << std::endl;
            return -1;
        }
    }
    else
    {
        std::cerr << "No data for book 1" << std::endl;
        return -1;
    }
    return 0;
}

void ex1_22()
{
    Sales_data total, d;
    double price = 0;
    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold * price;
        while (std::cin >> d.bookNo >> d.units_sold >> price)
        {
            d.revenue = d.units_sold * price;
            if (total.bookNo == d.bookNo)
            {
                total.units_sold += d.units_sold;
                total.revenue += d.revenue;
            }
            else
            {
                std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
                total.bookNo = d.bookNo;
                total.units_sold = d.units_sold;
                total.revenue = d.revenue;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue;
    }
    else
    {
        std::cout << "No data for item" << std::endl;
    }
}

void ex1_23()
{
    Sales_data total, d;
    int count = 1;
    if (std::cin >> total.bookNo)
    {
        while (std::cin >> d.bookNo)
        {
            if (total.bookNo == d.bookNo)
            {
                count++;
            }
            else
            {
                std::cout << total.bookNo << " " << count << std::endl;
                total.bookNo = d.bookNo;
                count = 1;
            }
        }
        std::cout << total.bookNo << " " << count << std::endl;
    }
    else
    {
        std::cerr << "No data for item " << std::endl;
    }
}

int main()
{
    ex1_23();

    return 0;
}
