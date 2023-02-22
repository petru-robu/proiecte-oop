#include "../../inc/global/io.h"

void IO::read(std::istream& in) {}
void IO::write(std::ostream& out) {}

std::istream& operator>>(std::istream& in, IO& ob)
{
    ob.read(in);
    return in;
}

std::ostream& operator<<(std::ostream& out, IO& ob)
{
    ob.write(out);
    return out;
}