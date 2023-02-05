#include <bits/stdc++.h>
#include "../include/material.h"

Material::Material()
{}

Material::Material(int code, std::string name, int price, int quantity): code(code), name(name), 
price(price), quantity(quantity)
{}

void Material::set_code(int newCode) {code = newCode;}
void Material::set_name(std::string newName) {name = newName;}
void Material::set_price(int newPrice) {price = newPrice;}
void Material::set_quantity(int newQuantity) {quantity = newQuantity;}
