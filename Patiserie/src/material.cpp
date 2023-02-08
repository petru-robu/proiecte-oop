#include <bits/stdc++.h>
#include "../inc/material.h"

Material::Material()
{}

Material::Material(int code, std::string name, int price, int quantity): code(code), name(name), 
price(price), quantity(quantity)
{}

void Material::set_code(int newCode) {code = newCode;}
void Material::set_name(std::string newName) {name = newName;}
void Material::set_price(int newPrice) {price = newPrice;}
void Material::set_quantity(int newQuantity) {quantity = newQuantity;}

int Material::get_code(){return code;}
std::string Material::get_name(){return name;}
int Material::get_price(){return price;}
int Material::get_quantity(){return quantity;}

void Material::print()
{
    std::cout<<"MAT: "<<name<<'\n';
    std::cout<<"COD: "<<code<<'\n';
    std::cout<<"PRET UNTIAR: "<<price<<'\n';
    std::cout<<"CANTITATE: "<<quantity<<"\n\n";
}
