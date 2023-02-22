#include "../../../inc/core/material/matb.h"

MaterialBlueprint::MaterialBlueprint(){}

MaterialBlueprint::MaterialBlueprint(int code=0, std::string name="", float price=0)
:code(code), name(name), price(price) {}

int MaterialBlueprint::get_code(){return code;}
std::string MaterialBlueprint::get_name(){return name;}
float MaterialBlueprint::get_price(){return price;}

void MaterialBlueprint::set_code(int c) {code = c;}
void MaterialBlueprint::set_name(std::string s) {name = s;}
void MaterialBlueprint::set_price(float p) {price = p;}

void MaterialBlueprint::write(std::ostream& out)
{
    out<<"Code: "<<code<<";  "<<"Name: "<<name<<";  ";
    out<<"Price: "<<price<<";  ";
}

void MaterialBlueprint::read(std::istream& in)
{
    std::cout<<"Code: "; in>>code;
    std::cout<<"Name: "; in>>name;
    std::cout<<"Price: "; in>>price;
}

bool MaterialBlueprint::operator==(const MaterialBlueprint& M)
{
    return (M.code == code && M.name == name);
}

bool MaterialBlueprint::operator!=(const MaterialBlueprint& M)
{
    return !(*this == M);
}
