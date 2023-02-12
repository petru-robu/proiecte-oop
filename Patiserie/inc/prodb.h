#ifndef PRODB_H
#define PRODB_H

#include <bits/stdc++.h>
#include "matb.h"


class Product_blueprint
{
protected:
    std::vector<std::pair<Material_blueprint, int>> Required;
    int popularity_index;
    float manufacturingPrice, sellingPrice;

    std::string name;

public:
    void calculatePricing();

    Product_blueprint();
    Product_blueprint(std::vector<std::pair<Material_blueprint, int>> R);

    int get_popularity_index();
    float get_sellingPrice();
    float get_manufacturingPrice();
    std::string get_name();

    void set_popularity_index(int a);
    void set_sellingPrice(float a);
    void set_manufacturingPrice(float a);
    void set_name(std::string s);

    virtual void read();
    virtual void print();

    friend std::istream& operator>>(std::istream &in, Product_blueprint& M);
    friend std::ostream& operator<<(std::ostream &out, Product_blueprint& M);
};



#endif