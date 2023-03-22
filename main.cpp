#include <iostream>
#include "classe_point.h"
using namespace std;

int main() {
  std::cout << "Hello World!\n";

  point p1(1,1);
  point p2;
  point p3(p2);

  p2.set_x(3);
  p2.set_y(2);
  
  cout<< p2.get_x() << p2.get_y() << endl;
}