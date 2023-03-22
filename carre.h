#include <iostream>
using namespace std;
#ifndef classe_point_h
#define classe_point_h

class carre{
private :
  float cote;

public:
  carre(float c);

  void get_cote();
  
  virtual float perimetre();
  virtual float surface();

};
ostream& operator<<(ostream&s, carre const&pt);
#endif 