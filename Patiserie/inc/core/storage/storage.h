#ifndef STORAGE_H
#define STORAGE_H

#include <bits/stdc++.h>
#include "../material/mat.h"
#include "../product/prod.h"

class Storage : public IO
{
private:
    std::vector<Material> ingredients;
    std::vector<Product> products;

public:
    Storage() =default;
    ~Storage() =default;

    void read(std::istream &in);
    void write(std::ostream &out);

    void remove(Material& M, int q);
    void remove(Product& P, int q);

    void add(Material& M);
    void add(Product& P);
};


#endif