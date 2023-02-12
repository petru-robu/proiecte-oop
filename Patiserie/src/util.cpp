#include "../inc/util.h"

Date::Date(){}
Date::Date(int d=0, int m=0, int y=0): d(d), m(m), y(y){}

int Date::get_day(){return d;}
int Date::get_month(){return m;}
int Date::get_year(){return y;}

void Date::set_day(int a){d = a;}
void Date::set_month(int a){m = a;}
void Date::set_year(int a){y = a;}

std::istream& operator>>(std::istream& in, Date &D)
{
    std::cout<<"Day: ";
    in>>D.d;
    std::cout<<"Month: ";
    in>>D.m;
    std::cout<<"Year: ";
    in>>D.y;

    return in;
}

std::ostream& operator<<(std::ostream& out, const Date &D)
{
    out<<D.d<<'/'<<D.m<<'/'<<D.y;
    return out;
}

