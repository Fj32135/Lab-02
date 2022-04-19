#pragma once
#include <iostream>
#include <vector>
class Item
{
public:
    std::string name_;
    float uNet_;
    char vType_;
    double amount_;
    Item(const std::string &name, const float &uNet, const char &vType, const double &amount);
    Item();

};
