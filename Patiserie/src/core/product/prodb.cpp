#include "../../../inc/core/product/prodb.h"

void ProductBlueprint::calculatePricing()
{
    float cost = 0;
    for(auto &p : required)
        cost += p.first.get_price() * p.second;

    manufacturingPrice = cost;
    sellingPrice = manufacturingPrice * 1.4;
}

int ProductBlueprint::get_popularity_index(){return popularity_index;}
float ProductBlueprint::get_sellingPrice(){return sellingPrice;}
float ProductBlueprint::get_manufacturingPrice(){return manufacturingPrice;}
std::string ProductBlueprint::get_name(){return name;}
int ProductBlueprint::get_code(){return code;}

void ProductBlueprint::set_popularity_index(int a) {popularity_index = a;}
void ProductBlueprint::set_sellingPrice(float a) {sellingPrice = a;}
void ProductBlueprint::set_manufacturingPrice(float a) {manufacturingPrice = a;}
void ProductBlueprint::set_name(std::string s){name = s;}
void ProductBlueprint::set_code(int c){code = c;}

void ProductBlueprint::write(std::ostream &out)
{
    out<<"Produsul: "<<name<<'{'<<code<<'}'<<'\n';

    for(auto &p : required)
        out<<p.first.get_name()<<'('<<p.second<<')'<<' ';

    out<<"\n"<<"Cost:"<<manufacturingPrice<<"  SellingAt: "<<sellingPrice;
    out<<"\n";
}

void ProductBlueprint::read(std::istream &in)
{
    int n;
    std::cout<<"Introducere Produs\n";
    std::cout<<"Nume Produs: "; in>>name;
    std::cout<<"Cod produs: "; in>>code;
    std::cout<<"Introduceti nr de ingrediente necesare: "; in>>n;

    while(n--)
    {
        MaterialBlueprint m;
        int q;

        in>>m;
        std::cout<<"Required Quantity: "; 
        in>>q;

        required.push_back({m, q});
    }
    calculatePricing();
}

bool ProductBlueprint::operator==(const ProductBlueprint& P)
{
    return (name == P.name && code == P.code);
}

bool ProductBlueprint::operator!=(const ProductBlueprint& P)
{
    return !(*this == P);
}
