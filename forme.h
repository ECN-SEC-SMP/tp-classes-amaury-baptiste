#include "classe_point.h"

using namespace std;

class forme{
private :
  point centre;
public:
  // constructeurs
  forme(point const& pt);
  
//accesseurs
  point get_centre() const;

//Methode
  void translater (point pt);
  virtual float perimetre()=0;
  virtual float surface()=0;

  //opérateur
  void operator+=(forme const& frm);

};

ostream& operator<<(ostream&s, forme const&frm);