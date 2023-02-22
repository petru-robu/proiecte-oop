#ifndef MATB_H
#define MATB_H
#include <bits/stdc++.h>
#include "../global/io.h"

class MaterialBlueprint : public IO
{
protected:
    int code;
    std::string name;
    float price;

public:
    MaterialBlueprint();
    MaterialBlueprint(int code, std::string name, float price);

    int get_code();
    std::string get_name();
    float get_price();

    void set_code(int c);
    void set_name(std::string n);
    void set_price(float p);

    void read(std::istream&) override;
    void write(std::ostream&) override;

    bool operator==(const MaterialBlueprint& M);
    bool operator!=(const MaterialBlueprint& M);
};

#endif