#ifndef INCLUDED_PAT
#define INCLUDED_PAT
#include <bits/stdc++.h>
#include "product.h"


class Patiserie
{
private:
std::vector<Product> Products;

public:
Product get_minCost();
Product get_maxCost();

void addProduct(Product p);

void print();
};


#endif