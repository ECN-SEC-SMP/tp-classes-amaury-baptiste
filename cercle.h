#include <iostream>
using namespace std;
#ifndef classe_point_h
#define classe_point_h

class cercle{
private :
  float rayon;

public:
  cercle(float r);

  void get_rayon();

  virtual float perimetre();
  virtual float surface();

};
ostream& operator<<(ostream&s, cercle const&pt);
#endif 