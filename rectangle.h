#include <iostream>
using namespace std;
#ifndef classe_point_h
#define classe_point_h

class rectangle{
private :
  float longueur;
  float largeur;

public:
  rectangle(float log, float lrg);

  void get_longueur();
  void get_largeur();

  virtual float perimetre();
  virtual float surface();

};
ostream& operator<<(ostream&s, rectangle const&pt);
#endif 