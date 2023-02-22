#include "../../../inc/core/storage/storage.h"

void Storage::add(Material& M)
{
    ingredients.push_back(M);
}

void Storage::add(Product& P)
{
    products.push_back(P);
}

void Storage::remove(Material& M, int q)
{
    for(auto &mat:ingredients)
        if(mat == M && mat.get_quantity()>q)
        {
            mat.set_quantity(mat.get_quantity()-q);
            break;
        }           
}

void Storage::remove(Product& P, int q)
{
    for(auto &prod:products)
        if(prod == P && prod.get_quantity()>q)
        {
            prod.set_quantity(prod.get_quantity()-q);
            break;
        }           
}

void Storage::write(std::ostream& out)
{
    out<<"IN MAGAZIE SE AFLA \n";
    out<<"PRODUSELE: \n";
    for(auto &prod:products)
        out<<prod<<'\n';
    out<<"INGREDIENTELE: \n";
    for(auto &ing:ingredients)
        out<<ing<<'\n';
}

void Storage::read(std::istream& in)
{
    std::cout<<"CITIRE MAGAZIE\n";
    int nrProd, nrIng;
    std::cout<<"Nr. produse: "; in>>nrProd;
    while(nrProd--)
    {   
        Product p; in>>p;
        products.push_back(p);
    }

    std::cout<<"Nr. ingrediente: "; in>>nrIng;
    while(nrIng--)
    {   
        Material m; in>>m;
        ingredients.push_back(m);
    }

}