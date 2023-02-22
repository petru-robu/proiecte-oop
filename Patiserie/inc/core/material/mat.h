#ifndef MAT_H
#define MAT_H
#include <bits/stdc++.h>

#include "../util/date.h"
#include "matb.h"

class Material : public MaterialBlueprint
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

    void read(std::istream& in) override;
    void write(std::ostream& out) override;

    bool operator==(const Material& M);
    bool operator!=(const Material& M);
};

#endif