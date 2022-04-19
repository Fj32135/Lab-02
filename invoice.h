#pragma once
#include "item.h"


class Invoice
{
private:
    std::string nipS_;
    std::string nipB_;
    std::vector<Item> items_;

public:
    Invoice(const std::string &nipS, const std::string &nipB);
    void add_item(const std::string &name, const float &net, const char &vType, const double &amount);
    void getInfo();
};
