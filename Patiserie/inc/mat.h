#ifndef MAT_H
#define MAT_H
#include <bits/stdc++.h>
#include "util.h"
#include "matb.h"

class Material : public Material_blueprint
{
private:
    int quantity;
    Date expiration;

public: 
    Material();
    Material(int code, std::string name, float price, int quantity, Date expiration);

    void set_quantity(int q);
    void set_expiration(Date d);

    int get_quantity();
    Date get_expiration();

    void read();
    void print();

    friend std::istream& operator>>(std::istream &in, Material& M);
    friend std::ostream& operator<<(std::ostream &out, Material& M);
    
};










#endif