#ifndef MATB_H
#define MATB_H
#include <bits/stdc++.h>

class Material_blueprint
{
protected:
    int code;
    std::string name;
    float price;

public:
    Material_blueprint();
    Material_blueprint(int code, std::string name, float price);

    int get_code();
    std::string get_name();
    float get_price();

    void set_code(int c);
    void set_name(std::string n);
    void set_price(float p);

    virtual void read();
    virtual void print();

    friend std::istream& operator>>(std::istream &in, Material_blueprint& M);
    friend std::ostream& operator<<(std::ostream &out, Material_blueprint& M);
};



#endif