#include "carre.h"
use namespace std;

  void carre::get_cote(){
    return this->cote;
  }
  
  virtual float carre::perimetre(){
    float peri = this->cote * 4;
    return peri
  }

  virtual float carre::surface(){
    float surf = this->cote * this->cote;
    return surf;    
  }


  ostream& operator<<(ostream&s, carre const&cr){
  s << "cote ="<<cr.get_cote() <<","<<"perimetre ="<<cr.perimetre() <<","<<"surface ="<<cr.perimeter() << endl;
  return s;
  }