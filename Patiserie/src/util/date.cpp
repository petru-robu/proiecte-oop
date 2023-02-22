#include "../../inc/util/date.h"

Date::Date(){}
Date::Date(int d=0, int m=0, int y=0): d(d), m(m), y(y){}

int Date::get_day(){return d;}
int Date::get_month(){return m;}
int Date::get_year(){return y;}

void Date::set_day(int a){d = a;}
void Date::set_month(int a){m = a;}
void Date::set_year(int a){y = a;}

void Date::read(std::istream& in)
{
    std::cout<<"Day: ";
    in>>d;
    std::cout<<"Month: ";
    in>>m;
    std::cout<<"Year: ";
    in>>y;
}

void Date::write(std::ostream& out)
{
    out<<d<<'/'<<m<<'/'<<y;
}

bool Date::operator==(const Date& D)
{
    return (d == D.d && m == D.m && y == D.y);
}
bool Date::operator!=(const Date& D)
{
    return !(*this == D);
}
bool Date::operator>(const Date& D)
{
    if(y == D.y)
    {
        if(m == D.m)
        {
            if(d == D.d)
                return false;
            else
                return d > D.d;
        }
        else
            return m > D.m;
    }
    else
        return y > D.y;
}
bool Date::operator<(const Date& D)
{
    return !(*this == D) && !(*this > D);
}
bool Date::operator>=(const Date& D)
{
    return ((*this == D) || (*this > D));
}
bool Date::operator<=(const Date& D)
{
    return ((*this == D) || (*this < D));
}