#ifndef PROD_H
#define PROD_H

#include "../util/date.h"
#include "prodb.h"

class Product: public ProductBlueprint
{
private:
    int quantity;
    Date expiration;

public:
    Product() =default;

    void set_quantity(int q);
    void set_expiration(Date d);

    int get_quantity();
    Date get_expiration();

    void read(std::istream& in);
    void write(std::ostream& out);

    bool operator==(const Product& P);
    bool operator!=(const Product& P);
};
#endif