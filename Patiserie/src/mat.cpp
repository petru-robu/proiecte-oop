#include "../inc/mat.h"

Material::Material(){}
Material::Material(int code = 0, std::string name = "", int price = 0, int quantity=0, Date expiration = Date())
: Material_blueprint(code, name, price), quantity(quantity), expiration(expiration) {}

void Material::set_quantity(int q) {quantity = q;}
void Material::set_expiration(Date d) {expiration = d;}

int Material::get_quantity(){return quantity;}
Date Material::get_expiration(){return expiration;}

void Material::read()
{
    std::cout<<"Code: "; std::cin>>code;
    std::cout<<"Name: "; std::cin>>name;
    std::cout<<"Price: "; std::cin>>price;
    std::cout<<"Quantity: "; std::cin>>quantity;
    std::cout<<"Expiration: \n"; std::cin>>expiration;
    std::cout<<'\n';
}

void Material::print()
{
    std::cout<<"Code: "<<code<<";  "<<"Name: "<<name<<";  ";
    std::cout<<"Price: "<<price<<";  "<<"Quantity: "<<quantity<<"; ";
    std::cout<<"Expiration: "<<expiration<<";"<<'\n';
}

std::istream& operator>>(std::istream &in, Material& M)
{
    M.read();
    return in;
}

std::ostream& operator<<(std::ostream &out, Material& M)
{
    M.print();
    return out;
}