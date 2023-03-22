#include <iostream>
using namespace std;

using namespace std;
#ifndef classe_point_h
#define classe_point_h

class point {
private :
  float x;
  float y;

public :
  // constructeurs
  point();
  point(float _x, float _y);
  point(point const& pt);
  //accesseurs
  float get_x() const;
  float get_y() const;

  //Mutateur
  void set_x(float _x);
  void set_y(float _y);

  //Methode
  void translater (point pt);
  void translater (float _x, float _y);

  //opérateur
  void operator+=(point const& pt);

};

ostream& operator<<(ostream&s, point const&pt);
#endif 