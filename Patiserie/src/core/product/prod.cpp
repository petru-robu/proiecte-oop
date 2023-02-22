#include "../../../inc/core/product/prod.h"


void Product::set_quantity(int q) {quantity = q;}
void Product::set_expiration(Date d) {expiration = d;}

int Product::get_quantity() {return quantity;}
Date Product::get_expiration() {return expiration;}

void Product::read(std::istream& in)
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
    std::cout<<"Expiration: "; in>>expiration;
    std::cout<<"Quantity: "; in>>quantity;
    calculatePricing();
}
void Product::write(std::ostream& out)
{
    out<<"Produsul: "<<name<<'{'<<code<<'}'<<'\n';

    for(auto &p : required)
        out<<p.first.get_name()<<'('<<p.second<<')'<<' ';

    //out<<"\n"<<"Cost:"<<manufacturingPrice<<"  SellingAt: "<<sellingPrice;
    out<<"Expirare: "<<expiration<<" Cantitate: "<<quantity;
    out<<"\n";
}

bool Product::operator==(const Product& P)
{
    return (name == P.name && code == P.code && expiration == P.expiration);
}

bool Product::operator!=(const Product& P)
{
    return !(*this == P);
}
