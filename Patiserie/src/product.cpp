#include "../inc/product.h"
#include <bits/stdc++.h>

Product::Product(std::vector<Material>& mats, std::string s): matRequired(mats), name(s){}
Product::Product(){}

int Product::get_cost()
{
    int cost = 0;
    for(auto &mat:matRequired)
        cost += mat.get_quantity() * mat.get_price();
    return cost;
}

std::string Product::get_name(){ return name;}
void Product::set_name(std::string s) {name = s;}

void Product::print()
{
    std::cout<<"PRODUSUL: "<<name<<": \n";
    std::cout<<"COST: "<<get_cost()<<"\n";
    std::cout<<"Sunt necesare: "<<matRequired.size()<<" materiale:  \n";

    for(auto &mat:matRequired)
        mat.print();
}