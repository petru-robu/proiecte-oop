#ifndef PRODB_H
#define PRODB_H

#include <bits/stdc++.h>
#include "../material/matb.h"
#include "../global/io.h"


class ProductBlueprint : public IO
{
protected:
    std::vector<std::pair<MaterialBlueprint, int>> required;
    int popularity_index;
    float manufacturingPrice, sellingPrice;

    int code;
    std::string name;

public:
    ProductBlueprint() =default;
    void calculatePricing();

    int get_popularity_index();
    float get_sellingPrice();
    float get_manufacturingPrice();
    std::string get_name();
    int get_code();

    void set_popularity_index(int a);
    void set_sellingPrice(float a);
    void set_manufacturingPrice(float a);
    void set_name(std::string s);
    void set_code(int c);

    void read(std::istream &in);
    void write(std::ostream &out);

    bool operator==(const ProductBlueprint& P);
    bool operator!=(const ProductBlueprint& P);

};

#endif