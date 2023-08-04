#include <iostream>

#include "example_external.hpp"

int main() {
  Integer a(12), b(45);
  Integer c = a.add(b);
  c.display();
}
