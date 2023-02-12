#ifndef UTIL_H
#define UTIL_H

#include <iostream> 

class Date
{
private:
    int d, m, y;

public:
    Date();
    Date(int d, int m, int y);

    int get_day();
    int get_month();
    int get_year();

    void set_day(int a);
    void set_month(int a);
    void set_year(int a);

    friend std::istream& operator>>(std::istream &in, Date &D);
    friend std::ostream& operator<<(std::ostream &out, const Date &D);
};


#endif