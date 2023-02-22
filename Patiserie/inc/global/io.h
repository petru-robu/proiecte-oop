#ifndef IO_H
#define IO_H
#include <iostream>

class IO
{
public:
    IO() =default;
    virtual ~IO() =default;

    friend std::istream& operator>>(std::istream& in, IO &ob);
    friend std::ostream& operator<<(std::ostream& out, IO &ob);

    virtual void read(std::istream& in);
    virtual void write(std::ostream& out);
};

#endif