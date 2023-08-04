#include "example_external.hpp"

Integer::Integer(const int &x) { data = x; }

Integer Integer::add(const Integer &x) { return Integer(data + x.data); }

void Integer::display() { std::cout << "Integer value : " << data << '\n'; }
