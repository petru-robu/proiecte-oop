#include "../inc/matb.h"

Material_blueprint::Material_blueprint(){}

Material_blueprint::Material_blueprint(int code=0, std::string name="", int price=0)
:code(code), name(name), price(price) {}

int Material_blueprint::get_code(){return code;}
std::string Material_blueprint::get_name(){return name;}
int Material_blueprint::get_price(){return price;}

void Material_blueprint::set_code(int c) {code = c;}
void Material_blueprint::set_name(std::string s) {name = s;}
void Material_blueprint::set_price(int p) {price = p;}

void Material_blueprint::print()
{
    std::cout<<"Code: "<<code<<";  "<<"Name: "<<name<<";  ";
    std::cout<<"Price: "<<price<<";  "<<'\n';
}

void Material_blueprint::read()
{
    std::cout<<"Code: "; std::cin>>code;
    std::cout<<"Name: "; std::cin>>name;
    std::cout<<"Price: "; std::cin>>price;
    std::cout<<'\n';
}

std::istream& operator>>(std::istream &in, Material_blueprint& M)
{
    M.read();
    return in;
}

std::ostream& operator<<(std::ostream &out, Material_blueprint& M)
{
    M.print();
    return out;
}