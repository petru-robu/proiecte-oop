#ifndef PAT_H
#define PAT_H
#include <bits/stdc++.h>
#include "material.h"
#include "product.h"


class Patiserie
{
private:
std::vector<Material> MaterialList;
std::vector<Product> ProductList;

public:
void add_material(Material M);
void add_product(Product P);

void update_products(int codProdus);
void update_materials(int codMaterial);

void get_cost(int codProdus);
void get_minCost();
void get_maxCost();




};


#endif