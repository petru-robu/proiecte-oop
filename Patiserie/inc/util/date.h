#ifndef DATE_H
#define DATE_H

#include <iostream>
#include "../global/io.h" 

class Date : public IO
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

    void read(std::istream &in);
    void write(std::ostream &out);

    bool operator==(const Date& D);
    bool operator!=(const Date& D);
    bool operator>(const Date& D);
    bool operator<(const Date& D);
    bool operator>=(const Date& D);
    bool operator<=(const Date& D);

};


#endif