#include <iostream>
#include "classe_point.h"
using namespace std;

int main() {
  std::cout << "Hello World!\n";

  point p1(1,1);
  point p2;
  point p3(p2);

  p3.set_x(3);
  p3.set_y(2);

  p3+=p1;
  cout<< p3 << endl;
}