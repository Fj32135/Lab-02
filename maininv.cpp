#include "invoice.h"
#include <iostream>

int main()
{
    Invoice inv("7770003699", "0123456789");
    inv.add_item("M3 screw", 0.37, 'A', 100);
    inv.add_item("2 mm drill", 2.54, 'B', 2);
    inv.getInfo();
    return 0;
}
