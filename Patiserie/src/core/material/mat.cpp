#include "../../../inc/core/material/mat.h"

Material::Material(){}
Material::Material(int code = 0, std::string name = "", float price = 0, int quantity=0, Date expiration = Date())
: MaterialBlueprint(code, name, price), quantity(quantity), expiration(expiration) {}

void Material::set_quantity(int q) {quantity = q;}
void Material::set_expiration(Date d) {expiration = d;}

int Material::get_quantity(){return quantity;}
Date Material::get_expiration(){return expiration;}

void Material::read(std::istream& in)
{
    std::cout<<"Code: "; in>>code;
    std::cout<<"Name: "; in>>name;
    std::cout<<"Price: "; in>>price;
    std::cout<<"Quantity: "; in>>quantity;
    std::cout<<"Expiration: \n"; in>>expiration;
    std::cout<<'\n';
}

void Material::write(std::ostream& out)
{
    out<<"Code: "<<code<<";  "<<"Name: "<<name<<";  ";
    out<<"Price: "<<price<<";  "<<"Quantity: "<<quantity<<"; ";
    out<<"Expiration: "<<expiration<<";"<<'\n';
}

bool Material::operator==(const Material& M)
{
    if(M.name != name || M.code != code)
        return false;
    else
    {
        if(expiration != M.expiration)
            return false;
        else    
            return true;
    }
}

bool Material::operator!=(const Material& M)
{
    return !(*this == M);
}
