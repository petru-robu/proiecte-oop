#ifndef MATERIAL_H
#define MATERIAL_H
#include <bits/stdc++.h>

class Material
{
private:

int code;
std::string name;
int price;
int quantity;

public:
Material();
Material(int code, std::string name, int price, int quantity);

void set_code(int newCode);
void set_name(std::string newName);
void set_price(int newPrice);
void set_quantity(int newQuantity);

int get_code();
std::string get_name();
int get_price();
int get_quantity();

void print_mat();

};


#endif