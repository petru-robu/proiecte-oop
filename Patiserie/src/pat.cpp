#include "../inc/pat.h"
#include <bits/stdc++.h>

Product Patiserie::get_minCost()
{
    int minim = INT_MAX;
    Product prodMin;
    for(auto &product:Products)
    {
        if(product.get_cost()< minim)
        {
            minim = product.get_cost();
            prodMin = product;
        }
    }
        
    return prodMin;
}

Product Patiserie::get_maxCost()
{
    int maxim = INT_MIN;
    Product prodMax;
    for(auto &product:Products)
    {
        if(product.get_cost()> maxim)
        {
            maxim = product.get_cost();
            prodMax = product;
        }
    }
        
    return prodMax;
}

void Patiserie::addProduct(Product p)
{
    Products.push_back(p);
}

void Patiserie::print()
{
    for(auto &product:Products)
        product.print();
    std::cout<<"\n";

}