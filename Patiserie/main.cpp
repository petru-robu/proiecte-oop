#include <bits/stdc++.h>
#include "inc/pat.h"


int main()
{
    Patiserie pat;

    std::cout<<"INPUT\nIntroduceti nr de produse: ";
    int n;
    std::cin>>n;
    while(n--)
    {
        std::string ProdName, MatName;
        int k, quantity, code, price;
        std::vector<Material> mats;
        
        std::cout<<"Introduceti un produs: ";
        std::cin>>ProdName;

        std::cout<<"Nr. materiale: ";
        std::cin>>k;
        
        for(int l=1; l<=k; l++)
        {
            std::cout<<l<<".Nume Mat: ";
            std::cin>>MatName;
            std::cout<<"Cod: ";
            std::cin>>code;
            std::cout<<"Cantitate: ";
            std::cin>>quantity;
            std::cout<<"Pret unitar: ";
            std::cin>>price;
            std::cout<<"\n\n";

            Material m(code, MatName, price, quantity);
            mats.push_back(m);
        }

        Product p(mats, ProdName);
        pat.addProduct(p);
    }

    pat.print();
    std::cout<<"\n\n";
    pat.get_minCost().print();
    std::cout<<"\n\n";
    pat.get_maxCost().print();
    return 0;
}