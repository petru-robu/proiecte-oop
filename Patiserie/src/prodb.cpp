#include "../inc/prodb.h"

void Product_blueprint::calculatePricing()
{
    float cost = 0;
    for(auto &p : Required)
        cost += p.first.get_price() * p.second;

    manufacturingPrice = cost;
    sellingPrice = manufacturingPrice * 1.4;
}

Product_blueprint::Product_blueprint(){}

Product_blueprint::Product_blueprint(std::vector<std::pair<Material_blueprint, int>> R)
{
    Required = R;
    calculatePricing();
}

int Product_blueprint::get_popularity_index(){return popularity_index;}
float Product_blueprint::get_sellingPrice(){return sellingPrice;}
float Product_blueprint::get_manufacturingPrice(){return manufacturingPrice;}
std::string Product_blueprint::get_name(){return name;}

void Product_blueprint::set_popularity_index(int a) {popularity_index = a;}
void Product_blueprint::set_sellingPrice(float a) {sellingPrice = a;}
void Product_blueprint::set_manufacturingPrice(float a) {manufacturingPrice = a;}
void Product_blueprint::set_name(std::string s){name = s;}

void Product_blueprint::print()
{
    std::cout<<"Produsul: "<<name<<'\n';

    for(auto &p : Required)
        std::cout<<p.first.get_name()<<'('<<p.second<<')'<<' ';

    std::cout<<"\n"<<"Cost:"<<manufacturingPrice<<"  SellingAt: "<<sellingPrice;
    std::cout<<"\n";
}

void Product_blueprint::read()
{
    int n;
    std::cout<<"Introducere Produs\n";
    std::cout<<"Nume Produs: "; std::cin>>name;
    std::cout<<"Introduceti nr de ingrediente necesare: "; std::cin>>n;

    while(n--)
    {
        Material_blueprint m;
        int q;

        std::cin>>m;
        std::cout<<"Required Quantity: "; std::cin>>q;

        Required.push_back({m, q});
    }
    calculatePricing();
}

std::istream& operator>>(std::istream &in, Product_blueprint& P)
{
    P.read();
    return in;
}

std::ostream& operator<<(std::ostream &out, Product_blueprint& P)
{
    P.print();
    return out;
}