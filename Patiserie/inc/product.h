#ifndef INCLUDED_PRODUCT
#define INCLUDED_PRODUCT
#include <bits/stdc++.h>
#include "material.h"

class Product
{
private:
std::string name;
std::vector<Material> matRequired;

public:
Product();
Product(std::vector<Material>& mats, std::string s);

void set_name(std::string s);
std::string get_name();

void print();

int get_cost();

};

#endif