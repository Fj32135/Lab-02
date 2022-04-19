#include "item.h"

Item::Item(const std::string &name, const float &uNet, const char &vType, const double &amount) : name_(name), uNet_(uNet), vType_(vType)
{
    if (amount > 0) amount_ = amount;
    else std::cout << "Incorrect input" << std::endl;

}
Item::Item() {}
