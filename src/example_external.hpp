#include <iostream>

struct Integer {
  int data;
  Integer(const int &x);
  Integer add(const Integer &x);
  void display();
};
