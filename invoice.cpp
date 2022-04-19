#include "invoice.h"

Invoice::Invoice(const std::string &nipS, const std::string &nipB) : nipS_(nipS), nipB_(nipB) {}
void Invoice::getInfo()
{
    
    std::cout << "------------------VAT invoice------------------" << std::endl
         << "===============================================" << std::endl
         << "seller:" << nipS_ << '\t' << '\t' << "buyer: " << nipB_ << std::endl << std::endl << std::endl
         << '\t' << '\t' << '\t' <<  "c.j." << '\t' <<  "VAT"<< '\t'  << "il."<< '\t'  <<  "net"<< '\t'  << "total" << std::endl
         << "-----------------------------------------------" << std::endl;

    float totNetto = 0, totBrutto = 0;
  
    int counter = 1;
    
    for (const auto &v : items_)
    {
        float netto, vat, brutto;
        if (v.vType_ == 'A') vat = 0.23;
        else if (v.vType_ == 'B') vat = 0.08;
        else vat = 0;
        netto = v.uNet_ * v.amount_;
        brutto = netto + (netto * vat);
        std::cout << counter << ". " << v.name_ << '\t' << '\t' << v.uNet_ << '\t' << v.vType_ << '\t' << v.amount_ << '\t' << netto << '\t' << brutto << std::endl;
        counter++;
        totNetto += netto;
        totBrutto += brutto;
    }
    std::cout << "------------------------------------ TOTAL ----" << std::endl
         << '\t' << '\t' << '\t' << '\t' << totNetto << " | " << totBrutto << std::endl;
}
void Invoice::add_item(const std::string &name, const float &net, const char &vType, const double &amount)
{
    Item temp;
    temp.amount_ = amount;
    temp.name_ = name;
    temp.vType_ = vType;
    temp.uNet_ = net;
    items_.emplace_back(temp);
}
